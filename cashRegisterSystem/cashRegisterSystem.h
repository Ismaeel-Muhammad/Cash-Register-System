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
    bool m_loadedOnce[60];
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
    //user
    void on_cat_1_clicked();
    void on_cat_2_clicked();
    void on_cat_3_clicked();
    void on_cat_4_clicked();
    void on_cat_5_clicked();
    void on_cat_6_clicked();
    void on_cat_7_clicked();
    void on_cat_8_clicked();
    void on_cat_9_clicked();
    void on_cat_10_clicked();
    void on_cat_11_clicked();
    void on_cat_12_clicked();
    void on_cat_13_clicked();
    void on_cat_14_clicked();
    void on_cat_15_clicked();
    void on_cat_16_clicked();
    void on_cat_17_clicked();
    void on_cat_18_clicked();
    void on_cat_19_clicked();
    void on_cat_20_clicked();
    void on_cat_21_clicked();
    void on_cat_22_clicked();
    void on_cat_23_clicked();
    void on_cat_24_clicked();
    void on_cat_25_clicked();
    void on_cat_26_clicked();
    void on_cat_27_clicked();
    void on_cat_28_clicked();
    void on_cat_29_clicked();
    void on_cat_30_clicked();
    void on_cat_31_clicked();
    void on_cat_32_clicked();
    void on_cat_33_clicked();
    void on_cat_34_clicked();
    void on_cat_35_clicked();
    void on_cat_36_clicked();
    void on_cat_37_clicked();
    void on_cat_38_clicked();
    void on_cat_39_clicked();
    void on_cat_40_clicked();
    void on_cat_41_clicked();
    void on_cat_42_clicked();
    void on_cat_43_clicked();
    void on_cat_44_clicked();
    void on_cat_45_clicked();
    void on_cat_46_clicked();
    void on_cat_47_clicked();
    void on_cat_48_clicked();
    void on_cat_49_clicked();
    void on_cat_50_clicked();
    void on_cat_51_clicked();
    void on_cat_52_clicked();
    void on_cat_53_clicked();
    void on_cat_54_clicked();
    void on_cat_55_clicked();
    void on_cat_56_clicked();
    void on_cat_57_clicked();
    void on_cat_58_clicked();
    void on_cat_59_clicked();
    void on_cat_60_clicked();
   //ADMIN 
    void on_cat_1_1_clicked();
    void on_cat_1_2_clicked();
    void on_cat_1_3_clicked();
    void on_cat_1_4_clicked();
    void on_cat_1_5_clicked();
    void on_cat_1_6_clicked();
    void on_cat_1_7_clicked();
    void on_cat_1_8_clicked();
    void on_cat_1_9_clicked();
    void on_cat_1_10_clicked();
    void on_cat_1_11_clicked();
    void on_cat_1_12_clicked();
    void on_cat_1_13_clicked();
    void on_cat_1_14_clicked();
    void on_cat_1_15_clicked();
    void on_cat_1_16_clicked();
    void on_cat_1_17_clicked();
    void on_cat_1_18_clicked();
    void on_cat_1_19_clicked();
    void on_cat_1_20_clicked();
    void on_cat_1_21_clicked();
    void on_cat_1_22_clicked();
    void on_cat_1_23_clicked();
    void on_cat_1_24_clicked();
    void on_cat_1_25_clicked();
    void on_cat_1_26_clicked();
    void on_cat_1_27_clicked();
    void on_cat_1_28_clicked();
    void on_cat_1_29_clicked();
    void on_cat_1_30_clicked();
    void on_cat_1_31_clicked();
    void on_cat_1_32_clicked();
    void on_cat_1_33_clicked();
    void on_cat_1_34_clicked();
    void on_cat_1_35_clicked();
    void on_cat_1_36_clicked();
    void on_cat_1_37_clicked();
    void on_cat_1_38_clicked();
    void on_cat_1_39_clicked();
    void on_cat_1_40_clicked();
    void on_cat_1_41_clicked();
    void on_cat_1_42_clicked();
    void on_cat_1_43_clicked();
    void on_cat_1_44_clicked();
    void on_cat_1_45_clicked();
    void on_cat_1_46_clicked();
    void on_cat_1_47_clicked();
    void on_cat_1_48_clicked();
    void on_cat_1_49_clicked();
    void on_cat_1_50_clicked();
    void on_cat_1_51_clicked();
    void on_cat_1_52_clicked();
    void on_cat_1_53_clicked();
    void on_cat_1_54_clicked();
    void on_cat_1_55_clicked();
    void on_cat_1_56_clicked();
    void on_cat_1_57_clicked();
    void on_cat_1_58_clicked();
    void on_cat_1_59_clicked();
    void on_cat_1_60_clicked();

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