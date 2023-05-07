#include "database.h"
#include <QMessageBox>
Database::Database(const char* filename) {
    int rc = sqlite3_open(filename, &m_db);
    if (rc != SQLITE_OK) {
        // Handle error
    }
}

Database::~Database() {
    sqlite3_close(m_db);
}

void Database::initialize() {
    // Create table
    const char* createProdTable = "CREATE TABLE IF NOT EXISTS Products (id INTEGER PRIMARY KEY,name TEXT NOT NULL, quantity INTEGER NOT NULL, price TEXT NOT NULL, type TEXT NOT NULL);";
    const char* createCustomerTable = "CREATE TABLE IF NOT EXISTS Customers (id INTEGER PRIMARY KEY,name TEXT NOT NULL, phone_number TEXT NOT NULL, total_paid INTEGER NOT NULL, class TEXT NOT NULL);";

    char* errMsg;
    int rc = sqlite3_exec(m_db, createProdTable, NULL, NULL, &errMsg);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Error in initializing database");
        msg.exec();
    }
    int rc2 = sqlite3_exec(m_db, createCustomerTable, NULL, NULL, &errMsg);
    if (rc2 != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Error in initializing database");
        msg.exec();
    }
}

void Database::insertCustomerRows(string name, string phone_number, int total_paid, string Class)
{
    int id = getRowCount(m_db, "Customers") + 1;
    const char* insertProduct = sqlite3_mprintf("INSERT INTO Customers(id, name, phone_number, total_paid, class) VALUES(%d, '%q', '%q', %d, '%q');", id, name.c_str(), phone_number.c_str(), total_paid, Class.c_str());
    char* errMsg;
    int rc = sqlite3_exec(m_db, insertProduct, NULL, NULL, &errMsg);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText(errMsg);
        msg.exec();
    }
}
void Database::insertProdRows(string name, string price, int quantity, string type)
{

  

    int id = getRowCount(m_db, "Products") + 1;
    const char* insertProduct = sqlite3_mprintf("INSERT INTO Products(id, name, price, quantity, type) VALUES(%d, '%q', '%q', %d, '%q');", id, name.c_str(), price.c_str(), quantity, type.c_str());
    char* errMsg;
    int rc = sqlite3_exec(m_db, insertProduct, NULL, NULL, &errMsg);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("Error in inserting row into product database");
        msg.exec();
    }
}
int Database::getRowCount(sqlite3* db, const char* tableName) {
    int rowCount = 0;
    sqlite3_stmt* stmt;

    const char* query = sqlite3_mprintf("SELECT COUNT(*) FROM %Q;", tableName);

    if (sqlite3_prepare_v2(db, query, -1, &stmt, NULL) == SQLITE_OK) {
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            rowCount = sqlite3_column_int(stmt, 0);
        }
        sqlite3_finalize(stmt);
    }

    sqlite3_free((void*)query);
    return rowCount;
}