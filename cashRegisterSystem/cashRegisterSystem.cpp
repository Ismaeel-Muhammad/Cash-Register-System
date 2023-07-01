#include "cashRegisterSystem.h"

cashRegisterSystem::cashRegisterSystem(QWidget* parent)
    : QMainWindow(parent), m_ui(new Ui::cashRegisterSystem2Class)
{
    m_ProductsDB = NULL;
    m_customersDB = NULL;
    m_OperationsDB = NULL;
    withDiscount = true;
    TotalBalanceForOperation = 0;
    TotalBalanceForOperationDiscounted = 0;
    std::fill_n(m_loadedOnce, 60, false);
    m_ui->setupUi(this);
    m_ui->password_field->setEchoMode(QLineEdit::Password);
    i = 0;
    m_ui->class_box->addItem("\u0639\u0645\u064A\u0644 \u0639\u0627\u062F\u064A");
    m_ui->class_box->addItem("\u0639\u0645\u064A\u0644 \u0645\u0647\u0645");
    m_ui->class_box->addItem("\u0637\u0627\u0644\u0628");
    std::fill_n(m_start, 3, false);
    QApplication::setWindowIcon(QIcon("icon.ico"));
    isAdmin = false;

    m_ui->discount_spinbox->setDecimals(0);
    m_ui->discount_spinbox->setPrefix("% ");

    Add_Item_names();

    //connects
    connect(m_ui->item_name_price, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &cashRegisterSystem::onPriceComboIndexChanged);

    connect(m_ui->formsStackedWidget, SIGNAL(currentChanged(int)), this, SLOT(onPageChanged(int)));

    // set the date for the QDateEdit widget
    m_ui->date_search->setDate(QDate::currentDate());

    m_ui->nav_frame->setHidden(true);

    QIntValidator* validator = new QIntValidator(0, 99999999999, parent);
    m_ui->phoneSearch->setValidator(validator);
    m_ui->new_customer_phone->setValidator(validator);
    m_ui->admin_phone_number->setValidator(validator);
    m_ui->user_phone_number->setValidator(validator);
    m_ui->formsStackedWidget->setCurrentIndex(0);
}

void cashRegisterSystem::onPageChanged(int index) {
    if (index == 6) {
        //clearProducts(m_ui->admin_products_scroll_area_content);

        m_ui->admin_categories_list->setLayoutDirection(Qt::RightToLeft);
        showCategoriesList(m_ui->admin_categories_list, m_ui->admin_products_scroll_area);
        showAllProducts(m_ui->admin_productsVerticalLayout,m_ui->admin_cartVerticalLayout,m_ui->admin_price_before,m_ui->admin_price_after,m_ui->admin_cartScrollArea,m_ui->admin_check_discount,m_ui->admin_phone_number);
    }
    else if (index == 1) {
        clearProducts(m_ui->user_products_scroll_area_content);

        m_ui->user_categories_list->setLayoutDirection(Qt::RightToLeft);
        showCategoriesList(m_ui->user_categories_list, m_ui->user_products_scroll_area);
        showAllProducts(m_ui->user_productsVerticalLayout, m_ui->user_cartVerticalLayout, m_ui->user_price_before, m_ui->user_price_after, m_ui->user_cartScrollArea, m_ui->user_check_discount, m_ui->user_phone_number);
        
    }
}

void cashRegisterSystem::clearProducts(QWidget* scrollAreaContent) {
    QLayout* layout = scrollAreaContent->layout(); // Get the layout of the widget
    if (layout != nullptr) {
        QLayoutItem* child = nullptr;
        while ((child = layout->takeAt(0)) != nullptr) {
            QWidget* widget = child->widget();
            if (widget) {
                layout->removeWidget(widget);
                delete widget;
            }
            delete child;
        }
    }
}

cashRegisterSystem::~cashRegisterSystem()
{
    delete m_ui;
}

void cashRegisterSystem::clear_grid_layout(QGridLayout* grid) {
    QLayout* layout = grid->layout();
    QLayoutItem* child = nullptr;
    while ((child = layout->takeAt(0)) != nullptr) {
        QWidget* widget = child->widget();
        if (widget) {
            layout->removeWidget(widget);
            delete widget;
        }
        delete child;
    }
}

void cashRegisterSystem::populateProductList(QVBoxLayout* productsVerticalLayout, QLabel* productType,
    QVBoxLayout* cartVerticalLayout, QLabel* priceBefore, QLabel* priceAfter,
    QScrollArea* cartScrollArea, QPushButton* checkButton,
    QLineEdit* phoneNumberField)
{
    //adding products label
    productsVerticalLayout->addWidget(productType);

    //preparing for adding products grid layout
    sqlite3_stmt* stmt;
    int rc = sqlite3_open("mydatabase.db", &m_ProductsDB);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        sqlite3_close(m_ProductsDB);
    }
    std::stringstream ss;
    ss << "select * from products where type ='" << productType->text().toStdString() << "'";
    QString query = QString::fromStdString(ss.str());
    rc = sqlite3_prepare_v2(m_ProductsDB, query.toUtf8().constData(), -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", query);
        sqlite3_finalize(stmt);
        sqlite3_close(m_ProductsDB);
    }
    //Creating a grid layout...

    int verticalItems = 0;
    int horizontalItems = 5;
    QLabel* nameLabel;
    QVector<QPushButton*> add_button;
    QDoubleSpinBox* quantityBox;
    int i = 0;
    QGridLayout* grid = new QGridLayout(this);
    grid->setAlignment(Qt::AlignRight);
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        double quantity = sqlite3_column_double(stmt, 1);
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        const char* price = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        QFrame* frame = new QFrame;
        QVBoxLayout* vboxLayout = new QVBoxLayout(frame);
        nameLabel = new QLabel(QString::fromUtf8(name));
        nameLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        nameLabel->setStyleSheet("border: none; font-size:16px; font-weight:bold;");

        //Assigning the strings to widgets...
        add_button.push_back(new QPushButton("Add To Cart!"));

        quantityBox = new QDoubleSpinBox();
        QLabel* lab = new QLabel(QString("Price: %1").arg(QString::fromUtf8(price)));
        lab->setStyleSheet("border: none; font-size:16px;");

        float price_val = lab->text().split(" ")[1].toFloat();
        //Setting up the lable style sheet
        //Creating horizontal line with desired properties...
        //Setting up the pushbutton with the on-hover changes...
        add_button.back()->setObjectName("btnName_1");
        quantityBox->setValue(1.00f);
        lab->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        //Setting up quantityBox proberties
        quantityBox->setObjectName("quantityBox_1");

        connect(add_button.back(), &QPushButton::clicked, [this, quantityBox, nameLabel, price_val, cartVerticalLayout, priceBefore,
            priceAfter, cartScrollArea, checkButton, phoneNumberField]() {
                on_name_button_clicked(quantityBox->value(), nameLabel->text(), price_val, cartVerticalLayout, priceBefore,
                    priceAfter, cartScrollArea, checkButton, phoneNumberField);
            });
        quantityBox->setMinimum(1);
        quantityBox->setMaximum(9999999);

        vboxLayout->addWidget(nameLabel);
        vboxLayout->addWidget(lab);
        vboxLayout->addWidget(quantityBox);
        vboxLayout->addWidget(add_button.back());
        frame->setStyleSheet("border: 1px solid black;");
        if (i % 2 == 1) frame->setStyleSheet("QFrame{background-color:rgba(184, 184, 184, 255); border: 1px solid black;}");
        frame->setMaximumSize(149, 156);
        //adding all the widgets to the previously cretaed grid layout...
        grid->addWidget(frame, verticalItems, horizontalItems);
        horizontalItems--;
        if (horizontalItems == 0)
        {
            verticalItems++;
            horizontalItems = 5;
        }
        i++;
    }
    productsVerticalLayout->addLayout(grid);

    sqlite3_finalize(stmt);
    sqlite3_close(m_ProductsDB);
}

QLabel* cashRegisterSystem::makeLabel(QString content) {
    QLabel* label = new QLabel(content, this);
    label->setStyleSheet("font-size:20px;");
    return label;
}

void cashRegisterSystem::showAllProducts(QVBoxLayout* productsVerticalLayout, QVBoxLayout* cartVerticalLayout, QLabel* priceBefore, QLabel* priceAfter, QScrollArea* cartScrollArea, QPushButton* checkDiscount, QLineEdit* phoneNumber) {
    for (auto category : categories)
        populateProductList(productsVerticalLayout, category, cartVerticalLayout, priceBefore, priceAfter, cartScrollArea, checkDiscount, phoneNumber);
}

void cashRegisterSystem::showCategoriesList(QListWidget* categoriesList, QScrollArea* productsScrollArea) {
    QFile file("categories.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        categoriesList->addItem(line);

        categories.append(makeLabel(line));
    }
    connect(categoriesList, &QListWidget::currentRowChanged, [=](int row) {
        itemClickedHandler(row, productsScrollArea);
        });
}

void cashRegisterSystem::itemClickedHandler(int row, QScrollArea* productsScrollArea) {
    int yMargin = productsScrollArea->height() - categories[row]->height();
    productsScrollArea->ensureWidgetVisible(categories[row], 0, yMargin);
}