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
    std::fill_n(m_loadedOnce, 4, false);
    m_ui->setupUi(this);
    m_ui->password_field->setEchoMode(QLineEdit::Password);
    i = 0;
    m_ui->class_box->addItem("\u0639\u0645\u064A\u0644 \u0639\u0627\u062F\u064A");
    m_ui->class_box->addItem("\u0639\u0645\u064A\u0644 \u0645\u0647\u0645");
    m_ui->class_box->addItem("\u0637\u0627\u0644\u0628");
    std::fill_n(m_start, 3, false);
    QApplication::setWindowIcon(QIcon("icon.ico"));
    isAdmin = false;
 
    Add_Item_names();
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

void cashRegisterSystem::populateProductList(QWidget* scrollContents, QGridLayout* grid, QString productType,
                                             QVBoxLayout* cartVerticalLayout, QLabel* priceBefore, QLabel* priceAfter,
                                             QScrollArea* cartScrollArea, QPushButton* checkButton,
                                             QLineEdit* phoneNumberField)
{
    // Clearing Products
    clear_grid_layout(grid);

    sqlite3_stmt* stmt;
    int rc = sqlite3_open("mydatabase.db", &m_ProductsDB);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        sqlite3_close(m_ProductsDB);
    }
    std::stringstream ss;
    ss << "select * from products where type ='" << productType.toStdString() << "'";
    QString query = QString::fromStdString(ss.str());
    rc = sqlite3_prepare_v2(m_ProductsDB, query.toUtf8().constData(), -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", query);
        sqlite3_finalize(stmt);
        sqlite3_close(m_ProductsDB);
    }
    //Creating a grid layout...

    
    int verticalItems = 0;
    int horizontalItems = 0;
    QLabel* nameLabel;
    QVector<QPushButton*> add_button;
    QSpinBox* quantityBox;
    int i = 0;
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        int quantity = sqlite3_column_int(stmt, 1);
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        const char* price = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        QFrame* frame = new QFrame;
        QVBoxLayout* vboxLayout = new QVBoxLayout(frame);
        nameLabel = new QLabel(QString::fromUtf8(name));
        nameLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        nameLabel->setStyleSheet("border: none; font-size:16px; font-weight:bold;");
        grid->setAlignment(Qt::AlignTop);

        //Assigning the strings to widgets...

        add_button.push_back(new QPushButton("Add To Cart!"));
        //add_button.back()->setStyleSheet("QPushButton { border: none; }");

        quantityBox = new QSpinBox();
        QLabel* lab = new QLabel(QString("Price: %1").arg(QString::fromUtf8(price)));
        lab->setStyleSheet("border: none; font-size:16px;");

        float price_val = lab->text().split(" ")[1].toFloat();
        //Setting up the lable style sheet
        //Creating horizontal line with desired properties...
        //Setting up the pushbutton with the on-hover changes...
        add_button.back()->setObjectName("btnName_1");
        quantityBox->setValue(1);
        lab->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        //Setting up quantityBox proberties
        quantityBox->setObjectName("quantityBox_1");

        connect(add_button.back(), &QPushButton::clicked, [this, quantityBox, nameLabel, price_val, cartVerticalLayout, priceBefore,
                                                            priceAfter, cartScrollArea, checkButton, phoneNumberField]() {
            on_name_button_clicked(quantityBox->value(), nameLabel->text(), price_val, cartVerticalLayout, priceBefore,
                                   priceAfter, cartScrollArea, checkButton, phoneNumberField);
            });

        vboxLayout->addWidget(nameLabel);
        vboxLayout->addWidget(lab);
        vboxLayout->addWidget(quantityBox);
        vboxLayout->addWidget(add_button.back());
        if (i % 2 == 1) frame->setStyleSheet("QFrame{background-color:rgba(184, 184, 184, 255)}");

        //adding all the widgets to the previously cretaed grid layout...
        grid->addWidget(frame, verticalItems, horizontalItems);
        scrollContents->setLayout(grid);
        horizontalItems++;
        if (horizontalItems % 5 == 0)
        {
            verticalItems++;
            horizontalItems = 0;
        }
        i++;
    }

    sqlite3_finalize(stmt);
    sqlite3_close(m_ProductsDB);
}

void cashRegisterSystem::on_AddNewCustomer_clicked()
{
    m_ui->formsStackedWidget->setCurrentIndex(3);
}

void cashRegisterSystem::on_AddNewCustomer_2_clicked()
{
    m_ui->formsStackedWidget->setCurrentIndex(3);
}

void cashRegisterSystem::on_gotoproducts_clicked()
{
    generateProdtbl();
    GenrateTypesForCombo();
    m_ui->formsStackedWidget->setCurrentIndex(5);
}

void cashRegisterSystem::on_gotoproducts_2_clicked()
{
    generateProdtbl();
    GenrateTypesForCombo();
    m_ui->formsStackedWidget->setCurrentIndex(5);
}

void cashRegisterSystem::on_customers_clicked() {
    search();
    m_ui->formsStackedWidget->setCurrentIndex(4);
}

void cashRegisterSystem::on_customers_2_clicked() {
    search();
    m_ui->formsStackedWidget->setCurrentIndex(4);
}

void cashRegisterSystem::on_logout_clicked() {
    //DeleteAll(m_ui->price_before, m_ui->price_after, m_ui->check_discount, m_ui->phone_number, m_ui->cartContents);
    std::fill_n(m_loadedOnce, 4, false);
    m_ui->formsStackedWidget->setCurrentIndex(0);
}

void cashRegisterSystem::on_logout_admin_clicked() {
    //DeleteAll(m_ui->price_before_4, m_ui->price_after_4, m_ui->check_discount_4, m_ui->phone_number_4, m_ui->cartContents_4);
    std::fill_n(m_loadedOnce, 4, false);
    m_ui->formsStackedWidget->setCurrentIndex(0);
}
