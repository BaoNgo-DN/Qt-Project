#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>


class DataBaseManager
{
public:

    static DataBaseManager& instance();


    DataBaseManager (const DataBaseManager&) = delete;

    DataBaseManager& operator= (const DataBaseManager&) = delete;

    bool openDatabase();

    void closeDatabase();

private:

    DataBaseManager();
    ~DataBaseManager();

    QSqlDatabase db;

    QString dbPath;

};

#endif
