#include "cashRegisterSystem.h"

void cashRegisterSystem::payOperation(char type, QLabel* priceBefore, QLabel* priceAfter,
    QPushButton* checkButton, QLineEdit* phoneNumberField,
    QWidget* cartContent) {

    Database db("mydatabase.db");
    db.updateCustomerTotalPaid(phoneNumberField->text().toStdString(), priceAfter->text().toFloat(), type);
    QHashIterator<QString, QList<QVariant>> i(myHash);
    while (i.hasNext()) {
        //   QString result = i.key() + " " + i.value().at(0) + " " + i.value().at(1);
        i.next();
        // name, quantity, type(add, subtract)
        db.updateProductQuantity(i.key().toStdString(), i.value().at(0).toInt(), updateType(type));
        // name, quantity, price
        float price = check_discount(priceAfter, checkButton, phoneNumberField, i.value().at(1).toFloat());
        string operation_type = m_ui->order_type_cmb->currentText().toUtf8().constData();
        db.insertOrUpdateOperation(i.key().toStdString(), i.value().at(0).toInt(), price, operation_type, type);
    }
    Show_Sell_window();
    Show_retrieve_window();
    Update_total();
    DeleteAll(priceBefore, priceAfter, checkButton, phoneNumberField, cartContent);
    db.~Database();
}

void cashRegisterSystem::DeleteAll(QLabel* priceBefore, QLabel* priceAfter,
    QPushButton* checkButton, QLineEdit* phoneNumberField,
    QWidget* cartContent) {
    QLayout* layout = cartContent->layout(); // Get the layout of the scroll area widget
    QLayoutItem* child;
    while ((child = layout->takeAt(0)) != nullptr) {
        QWidget* widget = child->widget();
        if (widget) {
            layout->removeWidget(widget);
            delete widget;
        }
        delete child;
    }
    layout->addItem(new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding));  // Add a spacer item to the layout
    myHash.clear();
    TotalBalanceForOperation = 0;
    m_ui->discount_spinbox->setValue(0);
    phoneNumberField->setText("");
    priceAfter->setText(QString::number(TotalBalanceForOperation));
    priceBefore->setText(QString::number(TotalBalanceForOperation));
    checkButton->setDisabled(false);
    m_ui->order_type_cmb->setCurrentIndex(0);
    withDiscount = false;
}

float cashRegisterSystem::check_discount(QLabel* priceAfter, QPushButton* checkButton, QLineEdit* phoneNumberField, float price) {
    const QString phoneNumber = phoneNumberField->text();
    if (phoneNumber.isEmpty()) {
        QMessageBox::warning(this, "oh no", "Phone number is empty");
        return 0;
    }
    
    // Open the database
    if (sqlite3_open("mydatabase.db", &m_customersDB) != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        return 0;
    }

    // Prepare the query
    const QString query = "SELECT class FROM Customers WHERE phone_number = ?";
    sqlite3_stmt* stmt = nullptr;
    if (sqlite3_prepare_v2(m_customersDB, query.toUtf8().constData(), -1, &stmt, NULL) != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot prepare query");
        sqlite3_close(m_customersDB);
        return 0;
    }

    // Bind the parameter to the phone number
    if (sqlite3_bind_text(stmt, 1, phoneNumber.toUtf8().constData(), -1, SQLITE_TRANSIENT) != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot bind parameter");
        sqlite3_finalize(stmt);
        sqlite3_close(m_customersDB);
        return 0;
    }

    // Execute the query and process the result
    float mxDiscount = 0;
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        const char* customerClass = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));

        float adminDiscount = 1-((float)m_ui->discount_spinbox->value() / 100);

        if (QString::fromUtf8(customerClass) == "\u0637\u0627\u0644\u0628" || QString::fromUtf8(customerClass) == "\u0639\u0645\u064A\u0644 \u0645\u0647\u0645") {
            mxDiscount = min(adminDiscount, PHONE_DISCOUNT);
            QMessageBox::information(this, "xx",QString::number (adminDiscount));
            if (price == SLOT_PRICE) {
                price = priceAfter->text().toFloat();
                price *= mxDiscount;
                priceAfter->setText(QString::number(price));
                checkButton->setDisabled(true);
            }
            else {
                price *= mxDiscount;
                sqlite3_finalize(stmt);
                sqlite3_close(m_customersDB);
                return price;
            }
        }
        else {
            if (price != SLOT_PRICE) return price *= adminDiscount;
        }
    }

    // Finalize the statement and close the database
    sqlite3_finalize(stmt);
    sqlite3_close(m_customersDB);

    // Return the result
    return mxDiscount;
}

void cashRegisterSystem::Delete_On_Click(QPushButton* del, float totalPrice, QString name, int quantity,
    QLabel* priceBefore, QLabel* priceAfter,
    QPushButton* checkButton, QLineEdit* phoneNumberField)
{
    QList<QVariant> values = myHash[name];
    values[0] = values[0].toInt() - quantity;
    values[1] = values[1].toFloat() - totalPrice;
    myHash[name] = values;
    QFrame* layout = MappingLayout.take(del);

    float discount = check_discount(priceAfter, checkButton, phoneNumberField);
    TotalBalanceForOperation -= totalPrice;
    TotalBalanceForOperationDiscounted = discount * TotalBalanceForOperation;

    priceBefore->setText(QString::number(TotalBalanceForOperation));
    priceAfter->setText(QString::number(TotalBalanceForOperationDiscounted));

    while (layout->layout()->count() != 0) {
        QLayoutItem* item = layout->layout()->takeAt(0);
        delete item->widget();
        delete item;
    }
    delete layout;

}

void cashRegisterSystem::on_name_button_clicked(int quantity, QString name, float pricePerEach,
    QVBoxLayout* cartVerticalLayout, QLabel* priceBefore, QLabel* priceAfter,
    QScrollArea* cartScrollArea, QPushButton* checkButton, QLineEdit* phoneNumberField)
{
    float totalPrice = pricePerEach * quantity;
    QFrame* frame = new QFrame;
    QHBoxLayout* layout = new QHBoxLayout(frame);
    frame->setMaximumHeight(50);
    QLabel* names = new QLabel(name);
    names->setStyleSheet("border: none; font-size:16px; font-weight:bold;");

    QLabel* quantities = new QLabel(tr("x%1").arg(quantity));
    quantities->setStyleSheet("border: none; font-size:16px;");

    QLabel* pricesPerEach = new QLabel(tr("%1").arg(pricePerEach));
    pricesPerEach->setStyleSheet("border: none; font-size:16px;");

    QLabel* totPrice = new QLabel(tr("%1").arg(totalPrice));
    totPrice->setStyleSheet("border: none; font-size:16px;");

    Delete_button.push_back(new QPushButton("\u062D\u0630\u0641"));
    layout->addWidget(names);
    layout->addWidget(quantities);
    layout->addWidget(pricesPerEach);
    layout->addWidget(totPrice);
    layout->addWidget(Delete_button.back());
    layout->setAlignment(Qt::AlignTop);
    Delete_button.back()->setObjectName("btnName_1");
    cartVerticalLayout->addWidget(frame);
    TotalBalanceForOperation += totalPrice;

    priceBefore->setText(QString::number(TotalBalanceForOperation));
    priceAfter->setText(QString::number(TotalBalanceForOperation));

    QWidget* scrollWidget = cartScrollArea->widget();
    QVBoxLayout* scrollLayout = qobject_cast<QVBoxLayout*>(scrollWidget->layout());

    if (!scrollLayout) {
        // Create a new layout if one doesn't exist
        scrollLayout = new QVBoxLayout(scrollWidget);
        scrollWidget->setLayout(scrollLayout);
    }

    QSpacerItem* spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);
    scrollLayout->insertItem(0, spacer);
    scrollLayout->insertWidget(1, frame);

    connect(Delete_button.back(), &QPushButton::clicked, [this, btn = Delete_button.back(), totalPrice, names, quantity, priceBefore, priceAfter,
        checkButton, phoneNumberField]() {
        Delete_On_Click(btn, totalPrice, names->text(), quantity, priceBefore, priceAfter,
            checkButton, phoneNumberField);
    });

    if (i % 2 == 1) frame->setStyleSheet("QFrame{background-color:rgba(184, 184, 184, 255)}");

    i++;

    // Add a spacer at the end of the layout to prevent the last item from sticking to the top
    QSpacerItem* bottomSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding);
    scrollLayout->addItem(bottomSpacer);

    MappingLayout.insert(Delete_button.back(), frame);
    QList<QVariant> values;
    if (myHash.contains(name)) {
        values = myHash[name];
        values[0] = values[0].toInt() + quantity;
        values[1] = values[1].toFloat() + totalPrice;
        myHash[name] = values;
    }
    else {
        values << quantity << totalPrice;
        myHash.insert(name, values);
    }
}

char cashRegisterSystem::updateType(char type) {
    return  (type == '-') ? '+' : '-';
}
