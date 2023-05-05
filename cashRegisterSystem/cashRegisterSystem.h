#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_cashRegisterSystem.h"

class cashRegisterSystem : public QMainWindow
{
    Q_OBJECT

public:
    cashRegisterSystem(QWidget *parent = nullptr);
    ~cashRegisterSystem();

private:
    Ui::cashRegisterSystemClass ui;
};
