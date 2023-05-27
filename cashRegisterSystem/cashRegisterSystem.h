#ifndef CASH_REG_SYSTEM_H
#define CASH_REG_SYSTEM_H

#include <QtWidgets/QMainWindow>
#include <QSpinBox>
#include "ui_cashRegisterSystem.h"
#include "sqlite/sqlite3.h"
#include <QMessageBox>
#include <QString>
#include <QLabel>
#include <QGridLayout>
#include <sstream>
#include "database.h"
#include <string>
#include <QCoreApplication>
#include <qtableview.h>
#include <QStandardItemModel>
#include <qshortcut.h>
#include <QScrollBar>
#include <iostream>
#include <algorithm>

#define SLOT_PRICE -1
#define PHONE_DISCOUNT 0.9f

using namespace std;
class cashRegisterSystem : public QMainWindow {
    Q_OBJECT

public:
    cashRegisterSystem(QWidget* parent = nullptr);
    ~cashRegisterSystem();


private:
    Ui::cashRegisterSystem2Class* m_ui;
    bool m_start[3];
    bool m_loadedOnce[4];
    sqlite3* m_ProductsDB;
    sqlite3* m_OperationsDB;
    sqlite3* m_customersDB;
    float TotalBalanceForOperation;
    float TotalBalanceForOperationDiscounted;
    bool withDiscount;
    int i;
    bool isAdmin;
    string Item_names;
    QVector<QPushButton*> Delete_button;
    QHash<QPushButton*, QFrame*> MappingLayout;
    QHash<QString, QList<QVariant>> myHash;
    QHash<QString, QList<QVariant>> sellOperation;
    QHash<QString, QList<QVariant>> retrieveOperation;
    void InsertInHashOperations(QHash < QString, QList<QVariant>>&, QString name, float price, int Quantity_Sell);
    
    void populateProductList(QWidget*, QGridLayout*, QString, QVBoxLayout*, QLabel*, QLabel*, QScrollArea*, QPushButton*, QLineEdit*);

    string namesearch;
    string phonesearch;
    int rank;
    string productNameSearch;
    int ProductType;
    void DeleteAll(QLabel*, QLabel*, QPushButton*, QLineEdit*, QWidget*);

    void payOperation(char, QLabel*, QLabel*, QPushButton*, QLineEdit*, QWidget*);

    char updateType(char);

    void search();
    void generateProdtbl();
    void GenrateTypesForCombo();
    

    void Add_Item_names();
    void Show_Sell_window();
    void Show_window(string, QWidget*, QVBoxLayout*, bool start);
    void Show_retrieve_window();
    void Show_total_window(QVBoxLayout*, bool);
    void Update_total();
    void clear_grid_layout(QGridLayout*);
private slots:
    void on_name_button_clicked(int, QString, float, QVBoxLayout*, QLabel*, QLabel*, QScrollArea*, QPushButton*, QLineEdit*);

    void on_snacks_clicked();
    void on_drinks_clicked();
    void on_vegetables_clicked();
    void on_fruits_clicked();

    void on_snacks_2_clicked();
    void on_drinks_2_clicked();
    void on_vegetables_2_clicked();
    void on_fruits_2_clicked();

    void on_login_btn_clicked();

    void on_AddNewCustomer_clicked();
    //void on_AddNewCustomer_2_clicked();

    void on_add_new_clicked();
    void on_go_back_clicked();

    void Delete_On_Click(QPushButton*, float, QString, int, QLabel*, QLabel*, QPushButton*, QLineEdit*);

    float on_check_discount_clicked(float = SLOT_PRICE);

    float on_check_discount_4_clicked(float = SLOT_PRICE);

    float check_discount(QLabel*, QLabel*, QPushButton*, QLineEdit*, float = SLOT_PRICE);

    void on_cancel_order_clicked();
    void on_sell_clicked();
    void on_retrieve_clicked();

    void on_cancel_order_4_clicked();
    void on_sell_4_clicked();
    void on_retrieve_4_clicked();

    void on_add_item_clicked();
    void on_add_quantity_clicked();
    void on_remove_item_clicked();
    void on_remove_quantity_clicked();
    void on_back_to_main_clicked();

    void on_customers_clicked();
    //void on_customers_2_clicked();

    //void on_backFromCustomers_clicked();
    void on_Search_btn_clicked();
    void on_logout_clicked();
    //void on_logout_admin_clicked();

    void on_gotoproducts_clicked();
    //void on_gotoproducts_2_clicked();

    void on_searchprobuctsBTN_clicked();
    void on_BackFromProductsBTN_clicked();

    void on_go_to_admin_form_clicked();

    void on_edit_price_clicked();

    void onPriceComboIndexChanged(int);
};

#endif // CASH_REG_SYSTEM_H