#include "cashRegisterSystem.h"

float cashRegisterSystem::on_check_discount_4_clicked(float price) {
    return check_discount(m_ui->price_after_4, m_ui->check_discount_4,m_ui->phone_number_4,price);
}

void cashRegisterSystem::on_cancel_order_4_clicked()
{
    DeleteAll(m_ui->price_before_4, m_ui->price_after_4, m_ui->check_discount_4, m_ui->phone_number_4, m_ui->cartContents_4);
}

void cashRegisterSystem::on_sell_4_clicked()
{
    payOperation('+', m_ui->price_before_4, m_ui->price_after_4, m_ui->check_discount_4, m_ui->phone_number_4, m_ui->cartContents_4);
}

void cashRegisterSystem::on_retrieve_4_clicked()
{
    payOperation('-', m_ui->price_before_4, m_ui->price_after_4, m_ui->check_discount_4, m_ui->phone_number_4, m_ui->cartContents_4);
}

void cashRegisterSystem::on_go_to_admin_form_clicked() {
    m_ui->formsStackedWidget->setCurrentIndex(2);
}
