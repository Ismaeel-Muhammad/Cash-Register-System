#include "cashRegisterSystem.h"

void cashRegisterSystem::on_add_item_clicked() {

	Database db("mydatabase.db");
	string Items_Names = m_ui->item_name_item->toPlainText().toUtf8().constData();
	string Items_Prices = m_ui->item_price_item->toPlainText().toUtf8().constData();
	int Quantity = m_ui->item_quantity_item->toPlainText().toInt();
	string type = m_ui->item_type_item->currentText().toUtf8().constData();
	db.insertProdRows(Items_Names, Items_Prices, Quantity, type);
	QMessageBox msg;
	msg.setText("\u0639\u0645\u0644\u064A\u0629 \u0646\u0627\u062C\u062D\u0629");
	msg.exec();
	m_ui->item_name_item->clear();
	m_ui->item_price_item->clear();
	m_ui->item_quantity_item->clear();
    m_ui->item_type_item->setCurrentIndex(0);

}
void cashRegisterSystem::on_add_quantity_clicked() {
    Database db("mydatabase.db");
    string item_name = m_ui->item_name_quantity->currentText().toUtf8().constData();
    int item_Quantity = m_ui->item_quantity_quantity->toPlainText().toInt();
    db.updateProductQuantity(item_name, item_Quantity,'+');
    QMessageBox msg;
    msg.setText("\u0639\u0645\u0644\u064A\u0629 \u0646\u0627\u062C\u062D\u0629");
    msg.exec();

    m_ui->item_quantity_quantity->clear();
    m_ui->item_name_quantity->setCurrentIndex(0);

}

void cashRegisterSystem::on_remove_item_clicked() {
    Database db("mydatabase.db");
    string Items_Names = m_ui->item_name_item->toPlainText().toUtf8().constData();
    db.DeleteProdRow(Items_Names);
    QMessageBox msg;
    msg.setText("\u062a\u0645 \u0627\u0644\u062d\u0630\u0641 \u0628\u0646\u062c\u0627\u062d");
    msg.exec();
    m_ui->item_name_item->clear();
}

void cashRegisterSystem::on_remove_quantity_clicked() {
    Database db("mydatabase.db");
    string item_name = m_ui->item_name_quantity->currentText().toUtf8().constData();
    int item_Quantity = m_ui->item_quantity_quantity->toPlainText().toInt();
    db.updateProductQuantity(item_name, item_Quantity, '-');
    QMessageBox msg;
    msg.setText("\u0639\u0645\u0644\u064A\u0629 \u0646\u0627\u062C\u062D\u0629");
    msg.exec();

    m_ui->item_quantity_quantity->clear();
    m_ui->item_name_quantity->setCurrentIndex(0);
}


void cashRegisterSystem::Add_Item_names() {
    sqlite3* db;
    int rc = sqlite3_open("mydatabase.db", &db);
    if (rc == SQLITE_OK) {
        sqlite3_stmt* stmt;
        const char* query = "SELECT name FROM Products";
        rc = sqlite3_prepare_v2(db, query, -1, &stmt, NULL);

        if (rc == SQLITE_OK) {
            m_ui->item_name_quantity->clear();

            while (sqlite3_step(stmt) == SQLITE_ROW) {
                const char* value = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));

                m_ui->item_name_quantity->addItem(QString::fromUtf8(value));
            }
            sqlite3_finalize(stmt);
        }
        sqlite3_close(db);
    }
}