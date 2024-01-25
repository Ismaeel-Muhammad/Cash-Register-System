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
#include <QFile>
#include <QTextStream>
#include <algorithm>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QDir>

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

    bool m_AdminProductIsUpdated;
    bool m_UserProductIsUpdated;

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
    QHash<QList<QString>, QList<QVariant>> sellOperation;
    QHash<QList<QString>, QList<QVariant>> retrieveOperation;
    void InsertInHashOperations(QHash<QList<QString>, QList<QVariant>>&, QList<QString>, float, int);

    string namesearch;
    string phonesearch;
    int rank;
    string productNameSearch;
    int ProductType;
    int Optype;
    QDate m_date_from, m_date_to;

    QList<QLabel*> const_categories;
    QList<QLabel*> clone_categories;

    void DeleteAll(QLabel*, QLabel*, QPushButton*, QLineEdit*, QWidget*);

    void payOperation(char, QLabel*, QLabel*, QPushButton*, QLineEdit*, QWidget*);

    char updateType(char);

    void search();
    void generateProductsTable();
    void GenrateTypesForCombo();

    void Add_Item_names();

    void Show_Sell_window_Admin();
    void Show_retrieve_window_Admin();
    void Update_total_Admin();
    void Show_total_window(QVBoxLayout*, QTextBrowser* , QWidget* );
    void clear_vertical_layout(QVBoxLayout*);

    void Update_total_User();
    void Show_retrieve_window_User();
    void Show_Sell_window_User();

    void Show_window(string, QWidget*, QVBoxLayout*, QComboBox*, QDateEdit*, QDateEdit*);

    void showCategoriesList(QListWidget*, QScrollArea*);
    void showAllProducts(QVBoxLayout*, QVBoxLayout*, QLabel*, QLabel*, QScrollArea*, QPushButton*, QLineEdit*);
    QLabel* makeLabel(const QString&);
    void makeQListCopy(QList<QLabel*>&, QList<QLabel*>&);

    void populateProductList(QVBoxLayout*, QLabel*, QVBoxLayout*, QLabel*, QLabel*, QScrollArea*, QPushButton*, QLineEdit*);

    void clearProducts(QVBoxLayout*);

    void fillCategories();

    void printReceipt(QLabel*, QLabel*);

    void confirmPayOperation(char);
    void confirmPayOperation_admin(char);

    void goMakeAccount(const QString);

    void backupDatabase();
private slots:

    void on_edit_admin_clicked();

    void onPageChanged(int index);

    void itemClickedHandler(int, QScrollArea*);

    void on_name_button_clicked(double, QString, float, QVBoxLayout*, QLabel*, QLabel*, QScrollArea*, QPushButton*, QLineEdit*);

    void on_login_btn_clicked();

    void on_add_new_clicked();

    void on_remove_customer_clicked();

    void Delete_On_Click(QPushButton*, float, QString, int, QLabel*, QLabel*, QPushButton*, QLineEdit*);

    float on_user_check_discount_clicked(float = SLOT_PRICE);

    float on_admin_check_discount_clicked(float = SLOT_PRICE);

    float check_discount(QLabel*, QLabel*, QPushButton*, QLineEdit*, float = SLOT_PRICE);

    void on_user_cancel_order_clicked();
    void on_user_sell_clicked();
    void on_user_retrieve_clicked();

    void on_admin_cancel_order_clicked();
    void on_admin_sell_clicked();
    void on_admin_retrieve_clicked();

    void on_add_item_clicked();
    void on_remove_item_clicked();

    void on_add_category_clicked();
    void on_remove_category_clicked();

    void on_add_quantity_clicked();
    void on_remove_quantity_clicked();

    void on_back_to_main_clicked();

    void on_Search_btn_clicked();

    void on_logout_clicked();

    void on_product_menu_clicked();
    void on_customers_menu_clicked();
    void on_main_menu_clicked();

    void on_searchprobuctsBTN_clicked();
    void on_BackFromProductsBTN_clicked();

    void on_go_to_admin_form_clicked();
    void on_go_to_sales_preview_user_clicked();

    void on_edit_price_clicked();

    void onPriceComboIndexChanged(int);
    void on_OPsearch_clicked();
    void on_OPsearch_user_clicked();

    void on_delete_all_products_clicked();
};

#endif // CASH_REG_SYSTEM_H
