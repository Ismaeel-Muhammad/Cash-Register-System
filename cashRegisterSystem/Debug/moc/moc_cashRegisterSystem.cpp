/****************************************************************************
** Meta object code from reading C++ file 'cashRegisterSystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cashRegisterSystem.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cashRegisterSystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASScashRegisterSystemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASScashRegisterSystemENDCLASS = QtMocHelpers::stringData(
    "cashRegisterSystem",
    "onPageChanged",
    "",
    "index",
    "itemClickedHandler",
    "QScrollArea*",
    "on_name_button_clicked",
    "QVBoxLayout*",
    "QLabel*",
    "QPushButton*",
    "QLineEdit*",
    "on_login_btn_clicked",
    "on_add_new_clicked",
    "on_remove_customer_clicked",
    "Delete_On_Click",
    "on_user_check_discount_clicked",
    "on_admin_check_discount_clicked",
    "check_discount",
    "on_user_cancel_order_clicked",
    "on_user_sell_clicked",
    "on_user_retrieve_clicked",
    "on_admin_cancel_order_clicked",
    "on_admin_sell_clicked",
    "on_admin_retrieve_clicked",
    "on_add_item_clicked",
    "on_remove_item_clicked",
    "on_add_category_clicked",
    "on_remove_category_clicked",
    "on_add_quantity_clicked",
    "on_remove_quantity_clicked",
    "on_back_to_main_clicked",
    "on_Search_btn_clicked",
    "on_logout_clicked",
    "on_product_menu_clicked",
    "on_customers_menu_clicked",
    "on_main_menu_clicked",
    "on_searchprobuctsBTN_clicked",
    "on_BackFromProductsBTN_clicked",
    "on_go_to_admin_form_clicked",
    "on_edit_price_clicked",
    "onPriceComboIndexChanged",
    "on_OPsearch_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScashRegisterSystemENDCLASS_t {
    uint offsetsAndSizes[84];
    char stringdata0[19];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[19];
    char stringdata5[13];
    char stringdata6[23];
    char stringdata7[13];
    char stringdata8[8];
    char stringdata9[13];
    char stringdata10[11];
    char stringdata11[21];
    char stringdata12[19];
    char stringdata13[27];
    char stringdata14[16];
    char stringdata15[31];
    char stringdata16[32];
    char stringdata17[15];
    char stringdata18[29];
    char stringdata19[21];
    char stringdata20[25];
    char stringdata21[30];
    char stringdata22[22];
    char stringdata23[26];
    char stringdata24[20];
    char stringdata25[23];
    char stringdata26[24];
    char stringdata27[27];
    char stringdata28[24];
    char stringdata29[27];
    char stringdata30[24];
    char stringdata31[22];
    char stringdata32[18];
    char stringdata33[24];
    char stringdata34[26];
    char stringdata35[21];
    char stringdata36[29];
    char stringdata37[31];
    char stringdata38[28];
    char stringdata39[22];
    char stringdata40[25];
    char stringdata41[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScashRegisterSystemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScashRegisterSystemENDCLASS_t qt_meta_stringdata_CLASScashRegisterSystemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "cashRegisterSystem"
        QT_MOC_LITERAL(19, 13),  // "onPageChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 5),  // "index"
        QT_MOC_LITERAL(40, 18),  // "itemClickedHandler"
        QT_MOC_LITERAL(59, 12),  // "QScrollArea*"
        QT_MOC_LITERAL(72, 22),  // "on_name_button_clicked"
        QT_MOC_LITERAL(95, 12),  // "QVBoxLayout*"
        QT_MOC_LITERAL(108, 7),  // "QLabel*"
        QT_MOC_LITERAL(116, 12),  // "QPushButton*"
        QT_MOC_LITERAL(129, 10),  // "QLineEdit*"
        QT_MOC_LITERAL(140, 20),  // "on_login_btn_clicked"
        QT_MOC_LITERAL(161, 18),  // "on_add_new_clicked"
        QT_MOC_LITERAL(180, 26),  // "on_remove_customer_clicked"
        QT_MOC_LITERAL(207, 15),  // "Delete_On_Click"
        QT_MOC_LITERAL(223, 30),  // "on_user_check_discount_clicked"
        QT_MOC_LITERAL(254, 31),  // "on_admin_check_discount_clicked"
        QT_MOC_LITERAL(286, 14),  // "check_discount"
        QT_MOC_LITERAL(301, 28),  // "on_user_cancel_order_clicked"
        QT_MOC_LITERAL(330, 20),  // "on_user_sell_clicked"
        QT_MOC_LITERAL(351, 24),  // "on_user_retrieve_clicked"
        QT_MOC_LITERAL(376, 29),  // "on_admin_cancel_order_clicked"
        QT_MOC_LITERAL(406, 21),  // "on_admin_sell_clicked"
        QT_MOC_LITERAL(428, 25),  // "on_admin_retrieve_clicked"
        QT_MOC_LITERAL(454, 19),  // "on_add_item_clicked"
        QT_MOC_LITERAL(474, 22),  // "on_remove_item_clicked"
        QT_MOC_LITERAL(497, 23),  // "on_add_category_clicked"
        QT_MOC_LITERAL(521, 26),  // "on_remove_category_clicked"
        QT_MOC_LITERAL(548, 23),  // "on_add_quantity_clicked"
        QT_MOC_LITERAL(572, 26),  // "on_remove_quantity_clicked"
        QT_MOC_LITERAL(599, 23),  // "on_back_to_main_clicked"
        QT_MOC_LITERAL(623, 21),  // "on_Search_btn_clicked"
        QT_MOC_LITERAL(645, 17),  // "on_logout_clicked"
        QT_MOC_LITERAL(663, 23),  // "on_product_menu_clicked"
        QT_MOC_LITERAL(687, 25),  // "on_customers_menu_clicked"
        QT_MOC_LITERAL(713, 20),  // "on_main_menu_clicked"
        QT_MOC_LITERAL(734, 28),  // "on_searchprobuctsBTN_clicked"
        QT_MOC_LITERAL(763, 30),  // "on_BackFromProductsBTN_clicked"
        QT_MOC_LITERAL(794, 27),  // "on_go_to_admin_form_clicked"
        QT_MOC_LITERAL(822, 21),  // "on_edit_price_clicked"
        QT_MOC_LITERAL(844, 24),  // "onPriceComboIndexChanged"
        QT_MOC_LITERAL(869, 19)   // "on_OPsearch_clicked"
    },
    "cashRegisterSystem",
    "onPageChanged",
    "",
    "index",
    "itemClickedHandler",
    "QScrollArea*",
    "on_name_button_clicked",
    "QVBoxLayout*",
    "QLabel*",
    "QPushButton*",
    "QLineEdit*",
    "on_login_btn_clicked",
    "on_add_new_clicked",
    "on_remove_customer_clicked",
    "Delete_On_Click",
    "on_user_check_discount_clicked",
    "on_admin_check_discount_clicked",
    "check_discount",
    "on_user_cancel_order_clicked",
    "on_user_sell_clicked",
    "on_user_retrieve_clicked",
    "on_admin_cancel_order_clicked",
    "on_admin_sell_clicked",
    "on_admin_retrieve_clicked",
    "on_add_item_clicked",
    "on_remove_item_clicked",
    "on_add_category_clicked",
    "on_remove_category_clicked",
    "on_add_quantity_clicked",
    "on_remove_quantity_clicked",
    "on_back_to_main_clicked",
    "on_Search_btn_clicked",
    "on_logout_clicked",
    "on_product_menu_clicked",
    "on_customers_menu_clicked",
    "on_main_menu_clicked",
    "on_searchprobuctsBTN_clicked",
    "on_BackFromProductsBTN_clicked",
    "on_go_to_admin_form_clicked",
    "on_edit_price_clicked",
    "onPriceComboIndexChanged",
    "on_OPsearch_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScashRegisterSystemENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  236,    2, 0x08,    1 /* Private */,
       4,    2,  239,    2, 0x08,    3 /* Private */,
       6,    9,  244,    2, 0x08,    6 /* Private */,
      11,    0,  263,    2, 0x08,   16 /* Private */,
      12,    0,  264,    2, 0x08,   17 /* Private */,
      13,    0,  265,    2, 0x08,   18 /* Private */,
      14,    8,  266,    2, 0x08,   19 /* Private */,
      15,    1,  283,    2, 0x08,   28 /* Private */,
      15,    0,  286,    2, 0x28,   30 /* Private | MethodCloned */,
      16,    1,  287,    2, 0x08,   31 /* Private */,
      16,    0,  290,    2, 0x28,   33 /* Private | MethodCloned */,
      17,    5,  291,    2, 0x08,   34 /* Private */,
      17,    4,  302,    2, 0x28,   40 /* Private | MethodCloned */,
      18,    0,  311,    2, 0x08,   45 /* Private */,
      19,    0,  312,    2, 0x08,   46 /* Private */,
      20,    0,  313,    2, 0x08,   47 /* Private */,
      21,    0,  314,    2, 0x08,   48 /* Private */,
      22,    0,  315,    2, 0x08,   49 /* Private */,
      23,    0,  316,    2, 0x08,   50 /* Private */,
      24,    0,  317,    2, 0x08,   51 /* Private */,
      25,    0,  318,    2, 0x08,   52 /* Private */,
      26,    0,  319,    2, 0x08,   53 /* Private */,
      27,    0,  320,    2, 0x08,   54 /* Private */,
      28,    0,  321,    2, 0x08,   55 /* Private */,
      29,    0,  322,    2, 0x08,   56 /* Private */,
      30,    0,  323,    2, 0x08,   57 /* Private */,
      31,    0,  324,    2, 0x08,   58 /* Private */,
      32,    0,  325,    2, 0x08,   59 /* Private */,
      33,    0,  326,    2, 0x08,   60 /* Private */,
      34,    0,  327,    2, 0x08,   61 /* Private */,
      35,    0,  328,    2, 0x08,   62 /* Private */,
      36,    0,  329,    2, 0x08,   63 /* Private */,
      37,    0,  330,    2, 0x08,   64 /* Private */,
      38,    0,  331,    2, 0x08,   65 /* Private */,
      39,    0,  332,    2, 0x08,   66 /* Private */,
      40,    1,  333,    2, 0x08,   67 /* Private */,
      41,    0,  336,    2, 0x08,   69 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::QString, QMetaType::Float, 0x80000000 | 7, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 5, 0x80000000 | 9, 0x80000000 | 10,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Float, QMetaType::QString, QMetaType::Int, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 9, 0x80000000 | 10,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Float, QMetaType::Float,    2,
    QMetaType::Float,
    QMetaType::Float, QMetaType::Float,    2,
    QMetaType::Float,
    QMetaType::Float, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 9, 0x80000000 | 10, QMetaType::Float,    2,    2,    2,    2,    2,
    QMetaType::Float, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 9, 0x80000000 | 10,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject cashRegisterSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASScashRegisterSystemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScashRegisterSystemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScashRegisterSystemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<cashRegisterSystem, std::true_type>,
        // method 'onPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'itemClickedHandler'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScrollArea *, std::false_type>,
        // method 'on_name_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVBoxLayout *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScrollArea *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>,
        // method 'on_login_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_new_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_remove_customer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Delete_On_Click'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>,
        // method 'on_user_check_discount_clicked'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'on_user_check_discount_clicked'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'on_admin_check_discount_clicked'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'on_admin_check_discount_clicked'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'check_discount'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'check_discount'
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>,
        // method 'on_user_cancel_order_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_sell_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_user_retrieve_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_admin_cancel_order_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_admin_sell_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_admin_retrieve_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_item_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_remove_item_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_category_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_remove_category_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_quantity_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_remove_quantity_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_to_main_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Search_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_product_menu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_customers_menu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_main_menu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchprobuctsBTN_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BackFromProductsBTN_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_go_to_admin_form_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edit_price_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPriceComboIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_OPsearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void cashRegisterSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cashRegisterSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPageChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->itemClickedHandler((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QScrollArea*>>(_a[2]))); break;
        case 2: _t->on_name_button_clicked((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QVBoxLayout*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QScrollArea*>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[9]))); break;
        case 3: _t->on_login_btn_clicked(); break;
        case 4: _t->on_add_new_clicked(); break;
        case 5: _t->on_remove_customer_clicked(); break;
        case 6: _t->Delete_On_Click((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[8]))); break;
        case 7: { float _r = _t->on_user_check_discount_clicked((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 8: { float _r = _t->on_user_check_discount_clicked();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 9: { float _r = _t->on_admin_check_discount_clicked((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 10: { float _r = _t->on_admin_check_discount_clicked();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 11: { float _r = _t->check_discount((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[5])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 12: { float _r = _t->check_discount((*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLabel*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QLineEdit*>>(_a[4])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->on_user_cancel_order_clicked(); break;
        case 14: _t->on_user_sell_clicked(); break;
        case 15: _t->on_user_retrieve_clicked(); break;
        case 16: _t->on_admin_cancel_order_clicked(); break;
        case 17: _t->on_admin_sell_clicked(); break;
        case 18: _t->on_admin_retrieve_clicked(); break;
        case 19: _t->on_add_item_clicked(); break;
        case 20: _t->on_remove_item_clicked(); break;
        case 21: _t->on_add_category_clicked(); break;
        case 22: _t->on_remove_category_clicked(); break;
        case 23: _t->on_add_quantity_clicked(); break;
        case 24: _t->on_remove_quantity_clicked(); break;
        case 25: _t->on_back_to_main_clicked(); break;
        case 26: _t->on_Search_btn_clicked(); break;
        case 27: _t->on_logout_clicked(); break;
        case 28: _t->on_product_menu_clicked(); break;
        case 29: _t->on_customers_menu_clicked(); break;
        case 30: _t->on_main_menu_clicked(); break;
        case 31: _t->on_searchprobuctsBTN_clicked(); break;
        case 32: _t->on_BackFromProductsBTN_clicked(); break;
        case 33: _t->on_go_to_admin_form_clicked(); break;
        case 34: _t->on_edit_price_clicked(); break;
        case 35: _t->onPriceComboIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->on_OPsearch_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScrollArea* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 8:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            case 7:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScrollArea* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QVBoxLayout* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 5:
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 7:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            case 6:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *cashRegisterSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cashRegisterSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScashRegisterSystemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cashRegisterSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}
QT_WARNING_POP
