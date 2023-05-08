#include "cashRegisterSystem.h"

void cashRegisterSystem::on_name_button_clicked(int quantity, QString name, float pricePerEach) {
    float totalPrice = pricePerEach * quantity;
    QHBoxLayout* layout = new QHBoxLayout(this);
}
