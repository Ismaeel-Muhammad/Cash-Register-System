#include "cashRegisterSystem.h"

cashRegisterSystem::cashRegisterSystem(QWidget* parent)
    : QMainWindow(parent), m_ui(new Ui::cashRegisterSystem2Class)
{
    m_ProductsDB = NULL;
    std::fill_n(m_loadedOnce, 4, false);
    m_ui->setupUi(this);
    m_ui->password_field->setEchoMode(QLineEdit::Password);
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

    QVector<QPushButton*> name_button;
    QVector<QSpinBox*> quantityBox;
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        //int id = sqlite3_column_int(stmt, 0);
        int quantity = sqlite3_column_int(stmt, 2);
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        const char* price = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
        //const char* type = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));

        //Assigning the strings to widgets...
        name_button.push_back(new QPushButton(name));
        quantityBox.push_back(new QSpinBox());
        QLabel* lab = new QLabel("Price: " + QString::fromUtf8(price) + ", Quantity: " + QString::number(quantity) + ".");
        QFrame* line;
        //Setting up the lable style sheet
        lab->setStyleSheet("background:transparent; Text-align:left;font-family:century gothic;font-size:18px; color:black");
        //Creating horizontal line with desired properties...
        line = new QFrame();
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line->setStyleSheet("background:transparent");
        //Setting up the pushbutton with the on-hover changes...
        name_button.back()->setObjectName("btnName_1");
        name_button.back()->setStyleSheet(
            "   QPushButton#btnName_1 {"
            "     background:transparent; Text-align:left;font-family:century gothic;font-size:18px; color:navy;"
            " }"
            " QPushButton#btnName_1:hover {"
            "     color: indigo;font-size:25px;"
            " }");
        //Setting up quantityBox proberties
        quantityBox.back()->setObjectName("quantityBox_1");

        connect(name_button.back(), &QPushButton::clicked, [this, quantityBoxPtr = quantityBox.back()]() {
            on_name_button_clicked(quantityBoxPtr->value());
        });
        //adding all the widgets to the previously cretaed grid layout...
        layout->addWidget(name_button.back());
        layout->addWidget(quantityBox.back());
        layout->addWidget(lab);
        layout->addWidget(line);
        scrollContents->setLayout(layout);
    }

    sqlite3_finalize(stmt);
    sqlite3_close(m_ProductsDB);
}
