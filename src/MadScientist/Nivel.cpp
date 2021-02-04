/**
 * Project Scientist Escape
 */


#include "Nivel.h"
#include <QJsonArray>

/**
 * Nivel implementation
 */


Nivel::Nivel()
{

}

int Nivel::getAnchoNivel() const
{
    return anchoNivel;
}

void Nivel::setAnchoNivel(int value)
{
    anchoNivel = value;
}

int Nivel::getAltoNivel() const
{
    return altoNivel;
}


void Nivel::leer(const QJsonObject &json)
{
    //Clean the Enemies List
    //listaEnemigos->clear();
    //Capture list of enemies
    QJsonArray enemyArray = json["enemyList"].toArray();
    //Iteration in list of enemies
    for(int index=0; index < enemyArray.size(); ++index) {
        //Convert enemy to JSON Object
        QJsonObject enemyObject = enemyArray[index].toObject();
        //Declare enemy var
        //Enemigo itemEnemy;
        //Read Enemy from JSON
        //itemEnemy.leer(enemyObject);
        //Insert enemy to list
        //listaEnemigos->append(itemEnemy);
    }
}

void Nivel::escribir(QJsonObject &json) const
{
    //Declare JSON Array for enemies
    QJsonArray enemyArray;
    //Iteration in list of enemies
    /*
    for(int index = 0; index < listaEnemigos->size(); ++index) {
        QJsonObject enemyObject;
        Enemigo itemEnemy;
        //itemEnemy.write(enemyObject);
        enemyArray.append(enemyObject);
    }
    */
    json["enemyList"]=enemyArray;

}


