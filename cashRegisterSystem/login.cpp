#include "cashRegisterSystem.h"
void cashRegisterSystem::on_login_btn_clicked()
{
    QString name = cashRegisterSystem::m_ui->username_field->text();
    QString password = m_ui->password_field->text();
    if (name == "admin" && password == "admin") {
        QMessageBox::information(this, "Login", "Welcome Admin!");
        isAdmin = true;
        m_ui->formsStackedWidget->setCurrentIndex(6);
    }
    else if (name == "user" && password == "user")
    {
        QMessageBox::information(this, "Login", "Welcome USER!");
        isAdmin = false;
        m_ui->formsStackedWidget->setCurrentIndex(1);
    }
    m_ui->username_field->setText("");
    m_ui->password_field->setText("");
}