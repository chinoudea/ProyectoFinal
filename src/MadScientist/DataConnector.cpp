/**
 * Project Scientist Scape
 */


#include "DataConnector.h"
#include <QDebug>

/**
 * DataConnector implementation
 */

DataConnector::DataConnector(QString typeDB, QString pathDB)
{
    if (!QSqlDatabase::isDriverAvailable(typeDB)) {
        qDebug() << "El driver de SQLITE no está disponible";
        status = -1;
    } else {
        db = QSqlDatabase::addDatabase(typeDB);
        db.setDatabaseName(pathDB);
        if (!db.open()) {
            qDebug() << "No fue posible acceder a la base de datos";
            status = -2;
        } else {
            query = *new QSqlQuery();
        }
    }
}

DataConnector::~DataConnector()
{
    db.close();
}

int DataConnector::authUser(QString username, QString password)
{
    query.prepare("SELECT id FROM Usuarios WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(password);
    if(!query.exec()) {
        qDebug() << "No fue posible ejecutar la consulta";

        return false;
    }
    if(query.next()) {
        return query.value("id").toInt();
    }

    return 0;
}
