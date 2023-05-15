#include "cashRegisterSystem.h"
void cashRegisterSystem::on_login_btn_clicked()
{
    QString name = cashRegisterSystem::m_ui->username_field->text();
    QString password = m_ui->password_field->text();
    if (name == "admin" && password == "admin") {
        QMessageBox::information(this, "Login", "Welcome Admin!");
        m_ui->formsStackedWidget->setCurrentIndex(2);
    }
    else if (name == "user" && password == "user")
    {
        QMessageBox::information(this, "Login", "Welcome USER!");
        m_ui->formsStackedWidget->setCurrentIndex(1);
    }
}