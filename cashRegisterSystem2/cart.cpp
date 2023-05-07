#include "cashRegisterSystem.h"

void cashRegisterSystem::on_name_button_clicked(int quantity) {
    QMessageBox::warning(this, "hey", QString::number(quantity));
}