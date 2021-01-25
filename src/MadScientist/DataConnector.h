/**
 * Project Scientist Escape
 */
#ifndef _DATACONNECTOR_H
#define _DATACONNECTOR_H

#include <QSqlDatabase>
#include <QSqlQuery>

const QString DRIVER("QSQLITE");
const QString PATH_DB("E:/database.db");

class DataConnector {

public:
    DataConnector(QString typeDB = DRIVER, QString pathDB = PATH_DB);
    ~DataConnector();
    int authUser(QString username, QString password);
private:
    QSqlDatabase db;
    QSqlQuery query;
    int status = 0;

};

#endif //_DATACONNECTOR_H
