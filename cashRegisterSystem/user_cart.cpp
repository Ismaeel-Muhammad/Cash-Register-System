﻿#include "cashRegisterSystem.h"

float cashRegisterSystem::on_user_check_discount_clicked(float price) {
    return check_discount(m_ui->user_price_after, m_ui->user_price_before, m_ui->user_check_discount, m_ui->user_phone_number, price);
}

void cashRegisterSystem::on_user_cancel_order_clicked()
{
    DeleteAll(m_ui->user_price_before, m_ui->user_price_after, m_ui->user_check_discount, m_ui->user_phone_number, m_ui->user_cart_contents);
}

void cashRegisterSystem::confirmPayOperation(char operationType) {
    const QString phoneNumber = m_ui->user_phone_number->text();
    Database* db = new Database("mydatabase.db");
    QString customerClass = "";
    if (db->checkPhoneNumber(phoneNumber.toStdString(), customerClass)) {
        printReceipt(m_ui->user_price_after, m_ui->user_price_before);
        payOperation(operationType, m_ui->user_price_before, m_ui->user_price_after, m_ui->user_check_discount, m_ui->user_phone_number, m_ui->user_cart_contents);
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

void cashRegisterSystem::on_user_retrieve_clicked()
{
    confirmPayOperation('-');
}

void cashRegisterSystem::on_user_sell_clicked()
{

    confirmPayOperation('+');
}
