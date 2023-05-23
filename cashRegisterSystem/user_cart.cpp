#include "cashRegisterSystem.h"

float cashRegisterSystem::on_check_discount_clicked(float price) {
    return check_discount(m_ui->price_after, m_ui->check_discount, m_ui->phone_number, price);
}

void cashRegisterSystem::on_cancel_order_clicked()
{
    DeleteAll(m_ui->price_before, m_ui->price_after, m_ui->check_discount, m_ui->phone_number, m_ui->cartContents);
}

void cashRegisterSystem::on_sell_clicked()
{
    payOperation('+', m_ui->price_before, m_ui->price_after, m_ui->check_discount, m_ui->phone_number, m_ui->cartContents);
}

void cashRegisterSystem::on_retrieve_clicked()
{
    payOperation('-', m_ui->price_before, m_ui->price_after, m_ui->check_discount, m_ui->phone_number, m_ui->cartContents);
}
