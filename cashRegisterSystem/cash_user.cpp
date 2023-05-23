#include "cashRegisterSystem.h"

void cashRegisterSystem::on_snacks_clicked() {
    if (!m_loadedOnce[0]) {
        populateProductList(m_ui->scrollAreaSnacksContents, m_ui->gridSnacks, "snacks", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
        m_loadedOnce[0] = true;
    }
    m_ui->ProductsStackedWidget->setCurrentIndex(0);
}

void cashRegisterSystem::on_drinks_clicked() {
    if (!m_loadedOnce[1]) {
        populateProductList(m_ui->scrollAreaDrinksContents, m_ui->gridDrinks, "drink", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
        m_loadedOnce[1] = true;
    }
    m_ui->ProductsStackedWidget->setCurrentIndex(1);
}

void cashRegisterSystem::on_vegetables_clicked() {
    if (!m_loadedOnce[2]) {
        populateProductList(m_ui->scrollAreaVegetablesContents, m_ui->gridVegetables, "vegetables", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
        m_loadedOnce[2] = true;
    }
    m_ui->ProductsStackedWidget->setCurrentIndex(2);
}

void cashRegisterSystem::on_fruits_clicked() {
    if (!m_loadedOnce[3]) {
        populateProductList(m_ui->scrollAreaFruitsContents, m_ui->gridFruits, "fruit", m_ui->cartVerticalLayout, m_ui->price_before, m_ui->price_after, m_ui->scrollArea_9, m_ui->check_discount, m_ui->phone_number);
        m_loadedOnce[3] = true;
    }
    m_ui->ProductsStackedWidget->setCurrentIndex(3);
}
