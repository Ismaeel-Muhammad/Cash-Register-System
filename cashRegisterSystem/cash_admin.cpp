#include "cashRegisterSystem.h"

void cashRegisterSystem::on_snacks_2_clicked() {
    if (!m_loadedOnce[0]) {
        populateProductList(m_ui->scrollAreaSnacksContents_2, m_ui->gridSnacks_2, "snacks", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
        m_loadedOnce[0] = true;
    }
    m_ui->ProductsStackedWidget_2->setCurrentIndex(0);
}

void cashRegisterSystem::on_drinks_2_clicked() {
    if (!m_loadedOnce[1]) {
        populateProductList(m_ui->scrollAreaDrinksContents_2, m_ui->gridDrinks_2, "drink", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
        m_loadedOnce[1] = true;
    }
    m_ui->ProductsStackedWidget_2->setCurrentIndex(1);
}

void cashRegisterSystem::on_vegetables_2_clicked() {
    if (!m_loadedOnce[2]) {
        populateProductList(m_ui->scrollAreaVegetablesContents_2, m_ui->gridVegetables_2, "vegetables", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
        m_loadedOnce[2] = true;
    }
    m_ui->ProductsStackedWidget_2->setCurrentIndex(2);
}

void cashRegisterSystem::on_fruits_2_clicked() {
    if (!m_loadedOnce[3]) {
        populateProductList(m_ui->scrollAreaFruitsContents_2, m_ui->gridFruits_2, "fruit", m_ui->cartVerticalLayout_4, m_ui->price_before_4, m_ui->price_after_4, m_ui->scrollArea_12, m_ui->check_discount_4, m_ui->phone_number_4);
        m_loadedOnce[3] = true;
    }
    m_ui->ProductsStackedWidget_2->setCurrentIndex(3);
}
