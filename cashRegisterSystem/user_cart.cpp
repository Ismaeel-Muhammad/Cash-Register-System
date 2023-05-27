#include "cashRegisterSystem.h"

float cashRegisterSystem::on_check_discount_clicked(float price) {
    return check_discount(m_ui->price_after, m_ui->price_before, m_ui->check_discount, m_ui->phone_number, price);
}

void cashRegisterSystem::on_cancel_order_clicked()
{
    DeleteAll(m_ui->price_before, m_ui->price_after, m_ui->check_discount, m_ui->phone_number, m_ui->cartContents);
}

void cashRegisterSystem::on_sell_clicked()
{
    const QString phoneNumber = m_ui->phone_number->text();
    Database* db = new Database("mydatabase.db");
    QString customerClass = "";
    if (db->checkPhoneNumber(phoneNumber.toStdString(), customerClass)) {
        payOperation('+', m_ui->price_before, m_ui->price_after, m_ui->check_discount, m_ui->phone_number, m_ui->cartContents);
    }
    else {
        // No match found in the database
        QMessageBox msgBox;
        msgBox.setText("No customer found with this phone number.");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Close | QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Close);
        int ret = msgBox.exec();
        if (ret == QMessageBox::Ok) {
            m_ui->formsStackedWidget->setCurrentIndex(3);
            m_ui->new_customer_phone->setText(phoneNumber);
        }
    }
}

void cashRegisterSystem::on_retrieve_clicked()
{
    const QString phoneNumber = m_ui->phone_number->text();
    Database* db = new Database("mydatabase.db");
    QString customerClass = "";
    if (db->checkPhoneNumber(phoneNumber.toStdString(), customerClass)) {
        payOperation('-', m_ui->price_before, m_ui->price_after, m_ui->check_discount, m_ui->phone_number, m_ui->cartContents);
    }
    else {
        // No match found in the database
        QMessageBox msgBox;
        msgBox.setText("No customer found with this phone number.");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Close | QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Close);
        int ret = msgBox.exec();
        if (ret == QMessageBox::Ok) {
            m_ui->formsStackedWidget->setCurrentIndex(3);
            m_ui->new_customer_phone->setText(phoneNumber);
        }
    }
}
