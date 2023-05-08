#include "cashRegisterSystem.h"

cashRegisterSystem::cashRegisterSystem(QWidget* parent)
    : QMainWindow(parent), m_ui(new Ui::cashRegisterSystem2Class)
{
    m_ProductsDB = NULL;
    std::fill_n(m_loadedOnce, 4, false);
    m_ui->setupUi(this);
    m_ui->password_field->setEchoMode(QLineEdit::Password);
    
    m_ui->class_box->addItem("\u0639\u0645\u064A\u0644 \u0639\u0627\u062F\u064A"); // Úãíá ÚÇÏí
    m_ui->class_box->addItem("\u0639\u0645\u064A\u0644 \u0645\u0647\u0645"); // Úãíá ãåã
    m_ui->class_box->addItem("\u0637\u0627\u0644\u0628"); // ØÇáÈ

}

cashRegisterSystem::~cashRegisterSystem()
{
    delete m_ui;
}

void cashRegisterSystem::on_snacks_clicked() {
    if (!m_loadedOnce[0]) {
        m_ui->ProductsStackedWidget->setCurrentIndex(0);
        m_loadedOnce[0] = true;
        populateProductList(m_ui->scrollAreaSnacksContents, "snacks");
    }
    else m_ui->ProductsStackedWidget->setCurrentIndex(0);
}

void cashRegisterSystem::on_drinks_clicked() {
    if (!m_loadedOnce[1]) {
        m_ui->ProductsStackedWidget->setCurrentIndex(1);
        m_loadedOnce[1] = true;
        populateProductList(m_ui->scrollAreaDrinksContents, "drink");
    }
    else m_ui->ProductsStackedWidget->setCurrentIndex(1);
}

void cashRegisterSystem::on_vegetables_clicked() {
    if (!m_loadedOnce[2]) {
        m_ui->ProductsStackedWidget->setCurrentIndex(2);
        m_loadedOnce[2] = true;
        populateProductList(m_ui->scrollAreaVegetablesContents, "vegetables");
    }
    else m_ui->ProductsStackedWidget->setCurrentIndex(2);
}

void cashRegisterSystem::on_fruits_clicked() {
    if (!m_loadedOnce[3]) {
        m_ui->ProductsStackedWidget->setCurrentIndex(3);
        m_loadedOnce[3] = true;
        populateProductList(m_ui->scrollAreaFruitsContents, "fruit");
    }
    else m_ui->ProductsStackedWidget->setCurrentIndex(3);
}

void cashRegisterSystem::populateProductList(QWidget* scrollContents, QString productType) {
    sqlite3_stmt* stmt;
    int rc = sqlite3_open("mydatabase.db", &m_ProductsDB);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        sqlite3_close(m_ProductsDB);
    }
    std::stringstream ss;
    ss << "select * from products where type ='" << productType.toStdString() << "'";
    QString query = QString::fromStdString(ss.str());
    rc = sqlite3_prepare_v2(m_ProductsDB,query.toUtf8().constData(), -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", query);
        sqlite3_finalize(stmt);
        sqlite3_close(m_ProductsDB);
    }
    //Creating a grid layout...
    QGridLayout* layout = new QGridLayout(this);

    int verticalItems = 0;
    int horizontalItems = 0;
    QLabel* nameLabel;
    QVector<QPushButton*> add_button;
    QVector<QSpinBox*> quantityBox;
    int i = 0;
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        //int id = sqlite3_column_int(stmt, 0);
        
        int quantity = sqlite3_column_int(stmt, 2);
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        const char* price = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
        //const char* type = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
        QFrame* frame = new QFrame;
        QVBoxLayout* vboxLayout = new QVBoxLayout(frame);
        nameLabel = new QLabel("Name: " + QString::fromUtf8(name));
        nameLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        layout->setAlignment(Qt::AlignTop);
        //Assigning the strings to widgets...
        add_button.push_back(new QPushButton("Add To Cart!"));
        quantityBox.push_back(new QSpinBox());
        QLabel* lab = new QLabel("Price: " + QString::fromUtf8(price) + ", Quantity: " + QString::number(quantity));
        //Setting up the lable style sheet
        //Creating horizontal line with desired properties...
        //Setting up the pushbutton with the on-hover changes...
        add_button.back()->setObjectName("btnName_1");
        lab->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

        //Setting up quantityBox proberties
        quantityBox.back()->setObjectName("quantityBox_1");
 
        connect(add_button.back(), &QPushButton::clicked, [this, quantityBoxPtr = quantityBox.back()]() {
            on_name_button_clicked(quantityBoxPtr->value());
        });
        vboxLayout->addWidget(nameLabel);
        vboxLayout->addWidget(lab);
        vboxLayout->addWidget(quantityBox.back());
        vboxLayout->addWidget(add_button.back());
        if (i % 2==1)
        {
            frame->setStyleSheet("QFrame{background-color:rgba(184, 184, 184, 255)}");
            
            
        }
        
        

        //adding all the widgets to the previously cretaed grid layout...
        layout->addWidget(frame, verticalItems, horizontalItems);
        scrollContents->setLayout(layout);
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
    m_ui->formsStackedWidget->setCurrentIndex(2);
}
