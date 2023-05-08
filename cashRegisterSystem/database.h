#ifndef DATABASE_H
#define DATABASE_H

#include "./sqlite/sqlite3.h"
#include <string>
using namespace std;
class Database {
public:
    Database(const char* filename);
    ~Database();
    void initialize();
    void insertCustomerRows(string name, string phone_number, int total_paid, string Class);
    void insertProdRows(string name, string price, int quantity, string type);
private:
    sqlite3* m_db;
    int getRowCount(sqlite3*, const char*);
};

#endif /* DATABASE_H */