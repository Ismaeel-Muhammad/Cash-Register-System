#include "cashRegisterSystem.h"
void cashRegisterSystem::on_login_btn_clicked()
{
    QString name = cashRegisterSystem::m_ui->username_field->text();
    QString password = m_ui->password_field->text();
    if (name == "admin" && password == "752510") {
        QMessageBox::information(this, "Login", "Welcome Admin!");
        isAdmin = true;
        m_ui->formsStackedWidget->setCurrentIndex(6);

        m_ui->AddNewCustomer->setHidden(false);
        m_ui->go_back->setHidden(false);
        m_ui->gotoproducts->setHidden(false);
        m_ui->customers->setHidden(false);
        m_ui->logout->setHidden(false);
        m_ui->go_to_admin_form->setHidden(false);
    }
    else if (name == "user" && password == "55555")
    {
        QMessageBox::information(this, "Login", "Welcome USER!");
        isAdmin = false;
        m_ui->formsStackedWidget->setCurrentIndex(1);

        m_ui->AddNewCustomer->setHidden(false);
        m_ui->go_back->setHidden(false);
        m_ui->gotoproducts->setHidden(false);
        m_ui->customers->setHidden(false);
        m_ui->logout->setHidden(false);
        m_ui->go_to_admin_form->setHidden(true);
    }
    m_ui->username_field->setText("");
    m_ui->password_field->setText("");
}