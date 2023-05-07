#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_cashRegisterSystem.h"
#include "sqlite/sqlite3.h"
#include <QMessageBox>
#include <QString>
#include <QLabel>
#include <QGridLayout>
#include <sstream>
class cashRegisterSystem : public QMainWindow
{
    Q_OBJECT

public:
    cashRegisterSystem(QWidget *parent = nullptr);
    ~cashRegisterSystem();
private:
    Ui::cashRegisterSystem2Class* m_ui;
    bool m_loadedOnce[4];
    sqlite3* m_ProductsDB;
    void populateProductList(QWidget*, QString);
private slots:
    void on_name_button_clicked();
    void on_snacks_clicked();
    void on_drinks_clicked();
    void on_vegetables_clicked();
    void on_fruits_clicked();
    void on_login_btn_clicked();

};
