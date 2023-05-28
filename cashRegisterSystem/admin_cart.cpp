#include "cashRegisterSystem.h"

float cashRegisterSystem::on_check_discount_4_clicked(float price) {
    return check_discount(m_ui->price_after_4, m_ui->price_before_4, m_ui->check_discount_4,m_ui->phone_number_4,price);
}

void cashRegisterSystem::on_cancel_order_4_clicked()
{
    DeleteAll(m_ui->price_before_4, m_ui->price_after_4, m_ui->check_discount_4, m_ui->phone_number_4, m_ui->cartContents_4);
}

void cashRegisterSystem::on_sell_4_clicked()
{
    const QString phoneNumber = m_ui->phone_number_4->text();
    Database* db = new Database("mydatabase.db");
    QString customerClass = "";
    if (db->checkPhoneNumber(phoneNumber.toStdString(), customerClass)) {
        payOperation('+', m_ui->price_before_4, m_ui->price_after_4, m_ui->check_discount_4, m_ui->phone_number_4, m_ui->cartContents_4);
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

void cashRegisterSystem::on_retrieve_4_clicked()
{
    const QString phoneNumber = m_ui->phone_number_4->text();
    Database* db = new Database("mydatabase.db");
    QString customerClass = "";
    if (db->checkPhoneNumber(phoneNumber.toStdString(), customerClass)) {
        payOperation('-', m_ui->price_before_4, m_ui->price_after_4, m_ui->check_discount_4, m_ui->phone_number_4, m_ui->cartContents_4);
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

void cashRegisterSystem::on_go_to_admin_form_clicked() {
    m_ui->formsStackedWidget->setCurrentIndex(2);
    m_ui->opType->setCurrentIndex(0);
}
