#include "cashRegisterSystem.h"
#include "database.h"
using namespace std;
QVector<QPushButton*> Delete_button;

void cashRegisterSystem::on_name_button_clicked(int quantity, QString name, float pricePerEach) {
    float totalPrice = pricePerEach * quantity;
    QFrame* frame = new QFrame;
    QHBoxLayout* layout = new QHBoxLayout(frame);

    QLabel* names = new QLabel(name);
    QLabel* quantities = new QLabel(tr("x%1").arg(quantity));
    QLabel* pricesPerEach = new QLabel(tr("%1").arg(pricePerEach));
    QLabel* totPrice = new QLabel(tr("%1").arg(totalPrice));
    float price = totPrice->text().toFloat();
    myHash.insert(name, quantity);
    Delete_button.push_back(new QPushButton("\u062D\u0630\u0641"));
    layout->addWidget(names);
    layout->addWidget(quantities);
    layout->addWidget(pricesPerEach);
    layout->addWidget(totPrice);
    layout->addWidget(Delete_button.back());
    layout->setAlignment(Qt::AlignTop);
    Delete_button.back()->setObjectName("btnName_1");
    m_ui->cartVerticalLayout->addWidget(frame);
    TotalBalanceForOperation += totalPrice;
    m_ui->price_before->setText(QString::number(TotalBalanceForOperation));
    m_ui->price_after->setText(QString::number(TotalBalanceForOperation));
    connect(Delete_button.back(), &QPushButton::clicked, [this, d = Delete_button.back(), price]() {
        Delete_On_Click(d,price);
    });
    QObject::connect(m_ui->sell, &QPushButton::clicked, [this, names](){
        on_sell_clicked(names->text());
    });
    QObject::connect(m_ui->retrieve, &QPushButton::clicked, [this, names]() {
        on_retrieve_clicked(names->text());
        });
    MappingLayout.insert(Delete_button.back(), frame);
}

void cashRegisterSystem::Delete_On_Click(QPushButton* del, float totalPrice) {
    QFrame* layout = MappingLayout.take(del);
        TotalBalanceForOperation -= totalPrice;
        m_ui->price_after->setText(QString::number(TotalBalanceForOperation));
        m_ui->price_before->setText(QString::number(TotalBalanceForOperation));
        while (layout->layout()->count() != 0) {
            QLayoutItem* item = layout->layout()->takeAt(0);
            delete item->widget();
            delete item;
        }
        delete layout;
}


void cashRegisterSystem::on_check_discount_clicked() {
    sqlite3_stmt* stmt;
    float price = (m_ui->price_after->text()).toFloat();
    int rc = sqlite3_open("mydatabase.db", &m_customersDB);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        sqlite3_close(m_customersDB);
    }
    std::stringstream ss;
    ss << "select class from Customers where phone_number ='" << m_ui->phone_number->text().toStdString() << "'";
    QMessageBox mess;
    QString query = QString::fromStdString(ss.str());
    rc = sqlite3_prepare_v2(m_customersDB, query.toUtf8().constData(), -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", query);
        sqlite3_finalize(stmt);
        sqlite3_close(m_customersDB);
    }
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const char* Class = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        size_t len = strlen(Class);
       
        if (strcmp(Class, "\u0637\u0627\u0644\u0628") == 0 || strcmp(Class, "\u0639\u0645\u064A\u0644 \u0645\u0647\u0645") == 0)
        {
            price = price - price * 0.1;
            m_ui->price_after->setText(QString::number(price));
        }
    }
    sqlite3_finalize(stmt);
    sqlite3_close(m_customersDB);
}

void cashRegisterSystem::on_cancel_order_clicked()
{
    DeleteAll();
}

void cashRegisterSystem::on_sell_clicked(QString name){
  
    Database db = Database("mydatabase.db");
    db.updateCustomerTotalPaid(m_ui->phone_number->text().toStdString(), m_ui->price_after->text().toFloat(),'+');
    db.updateProductQuantity(name.toStdString(), myHash[name], '-');
    DeleteAll();
    QMessageBox mess;
    mess.setText("\u062a\u0645\u062a \u0627\u0644\u0639\u0645\u0644\u064a\u0629 \u0628\u0646\u062c\u0627\u062d");
    mess.exec();
}
void cashRegisterSystem::on_retrieve_clicked(QString name)
{
    Database db = Database("mydatabase.db");
    db.updateCustomerTotalPaid(m_ui->phone_number->text().toStdString(), m_ui->price_after->text().toFloat(), '-');
    db.updateProductQuantity(name.toStdString(), myHash[name], '+');
    DeleteAll();
    QMessageBox mess;
    mess.setText("\u062a\u0645\u062a \u0627\u0644\u0639\u0645\u0644\u064a\u0629 \u0628\u0646\u062c\u0627\u062d");
    mess.exec();

}

void cashRegisterSystem::DeleteAll() {
    QVBoxLayout* layout = m_ui->cartVerticalLayout; // replace with your layout pointer
    QLayoutItem* child;
    while ((child = layout->takeAt(0)) != nullptr) {
        QWidget* widget = child->widget();
        if (widget) {
            layout->removeWidget(widget);
            delete widget;
        }
        delete child;
    }
    layout->addSpacerItem(new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding));
    TotalBalanceForOperation = 0;
    m_ui->price_after->setText(QString::number(TotalBalanceForOperation));
    m_ui->price_before->setText(QString::number(TotalBalanceForOperation));
}
