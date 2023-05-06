#include "cashRegisterSystem.h"

cashRegisterSystem::cashRegisterSystem(QWidget* parent)
    : QWidget(parent), m_ui(new Ui::TestShitClass)
{
    m_type[4];
    m_type[0] = false;
    m_type[1] = false;
    m_type[2] = false;
    m_type[3] = false;

    m_ui->setupUi(this);
    QVBoxLayout* frameLayout_snacks = new QVBoxLayout(m_ui->frame_snacks);
    QVBoxLayout* frameLayout_fruits = new QVBoxLayout(m_ui->frame_fruits);
    QVBoxLayout* frameLayout_vegges = new QVBoxLayout(m_ui->frame_vegetables);
    QVBoxLayout* frameLayout_drink = new QVBoxLayout(m_ui->frame_drinks);

    m_ui->frame_snacks->setLayout(frameLayout_snacks);
    m_ui->frame_vegetables->setLayout(frameLayout_vegges);
    m_ui->frame_fruits->setLayout(frameLayout_fruits);
    m_ui->frame_drinks->setLayout(frameLayout_drink);

}

cashRegisterSystem::~cashRegisterSystem()
{
    delete m_ui;
}
void cashRegisterSystem::on_snacks_clicked() {

    if (!m_type[0])
    {
        m_ui->stackedWidget->setCurrentIndex(0);
        m_type[0] = true;
        populateProductList(qobject_cast<QVBoxLayout*> (m_ui->frame_snacks->layout()), "select * from products where type ='snacks'");
    }
    else m_ui->stackedWidget->setCurrentIndex(0);
}

void cashRegisterSystem::on_vegetables_clicked() {
    if (!m_type[1])
    {
        m_ui->stackedWidget->setCurrentIndex(3);
        m_type[1] = true;
        populateProductList(qobject_cast<QVBoxLayout*> (m_ui->frame_vegetables->layout()), "select * from products where type ='vegetables'");
    }
    else m_ui->stackedWidget->setCurrentIndex(3);
}

void cashRegisterSystem::on_fruits_clicked() {
    if (!m_type[2])
    {
        m_ui->stackedWidget->setCurrentIndex(1);
        m_type[2] = true;
        populateProductList(qobject_cast<QVBoxLayout*> (m_ui->frame_fruits->layout()), "select * from products where type ='fruit'");
    }
    else m_ui->stackedWidget->setCurrentIndex(1);
}

void cashRegisterSystem::on_drinks_clicked() {
    if (m_type[3] == false)
    {
        m_ui->stackedWidget->setCurrentIndex(2);
        m_type[3] = true;
        populateProductList(qobject_cast<QVBoxLayout*> (m_ui->frame_drinks->layout()), "select * from products where type ='drink'");
    }
    else if (m_type[3] == true) m_ui->stackedWidget->setCurrentIndex(2);
}

void cashRegisterSystem::populateProductList(QVBoxLayout* layout, const char* sqlQuery) {
    int rc = sqlite3_open("mydatabase.db", &m_db);
    sqlite3_stmt* stmt;
    int id;
    QString name;
    int quantity;
    QString price;
    rc = sqlite3_prepare_v2(m_db, sqlQuery, -1, &stmt, NULL);
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        id = sqlite3_column_int(stmt, 0);
        name = QString::fromUtf8(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)));
        quantity = sqlite3_column_int(stmt, 2);
        price = QString::fromUtf8(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3)));
        QHBoxLayout* newLayout = new QHBoxLayout();
        QLabel* names = new QLabel(tr("Name: %1").arg(name));
        newLayout->addWidget(names);
        names->setAlignment(Qt::AlignCenter);
        names->setStyleSheet("border:none; background-color:#91a7ff");
        QLabel* quantities = new QLabel(tr("quantity: %1").arg(quantity));
        newLayout->addWidget(quantities);
        quantities->setAlignment(Qt::AlignCenter);
        quantities->setStyleSheet("border:none; background-color:#91a7ff");
        QLabel* prices = new QLabel(tr("Price: %1").arg(price));
        newLayout->addWidget(prices);
        prices->setAlignment(Qt::AlignCenter);
        prices->setStyleSheet("border:none; background-color:#91a7ff");
        QPushButton* add = new QPushButton(tr("add"));
        add->setObjectName("add");
        add->setStyleSheet("QPushButton {"
            "  border: 2px solid gray;"
            "  border-radius: 5px;"
            "  background-color: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 white, stop:1 #adadad);"
            "  color: black;"
            "  padding: 5px 10px;"
            "}");

        newLayout->addWidget(add);
        layout->addLayout(newLayout);
    }

    sqlite3_finalize(stmt);
    sqlite3_close(m_db);
}