/**
 * Project Scientist Escape
 */


#include "Enemigo.h"
#include "Nivel.h"
#include <QJsonArray>
#include <QJsonDocument>

/**
 * Nivel implementation
 */


Nivel::Nivel(int nivel)
{
    idNivel = nivel;
//    anchoNivel = 2445;
//    fondo = ":/levels/bg_1";
//    Enemigo itemEnemy;
//    itemEnemy.direccion=1;
//    itemEnemy.tipoArma = "";
//    itemEnemy.tipoPersonaje = 1;
//    listaEnemigos.append(itemEnemy);
//    itemEnemy.tipoPersonaje=2;
//    listaEnemigos.append(itemEnemy);
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
    idNivel = json["numero"].toInt();
    fondo = json["fondo"].toString();
    anchoNivel = json["ancho"].toInt();
    frecuencia = json["frecuencia"].toInt();
    //Clean the Enemies List
    listaEnemigos.clear();
    //Capture list of enemies
    QJsonArray enemyArray = json["enemyList"].toArray();
    //Iteration in list of enemies
    for(int index=0; index < enemyArray.size(); ++index) {
        //Convert enemy to JSON Object
        QJsonObject enemyObject = enemyArray[index].toObject();
        //Declare enemy var
        Enemigo itemEnemy;
        //Read Enemy from JSON
        itemEnemy.leer(enemyObject);
        //Insert enemy to list
        listaEnemigos.append(itemEnemy);
    }
}

void Nivel::escribir(QJsonObject &json) const
{
    json["numero"]=idNivel;
    json["fondo"]=fondo;
    json["ancho"]=anchoNivel;
    json["frecuencia"]=frecuencia;
    //Declare JSON Array for enemies
    QJsonArray enemyArray;
    //Iteration in list of enemies    
    for(int index = 0; index < listaEnemigos.size(); ++index) {
        QJsonObject enemyObject;
        Enemigo itemEnemy;
        itemEnemy.escribir(enemyObject);
        enemyArray.append(enemyObject);
    }    
    json["enemyList"]=enemyArray;

}

bool Nivel::loadNivel(Nivel::FormatoGuardar saveFormat)
{
    QString temp = "configNivel"+QString::number(idNivel)+".json";
    QFile loadFile(saveFormat == Json
        ? ("configNivel"+QString::number(idNivel)+".json")
        : ("configNivel"+QString::number(idNivel)+".dat"));

    if (!loadFile.open(QIODevice::ReadOnly)) {
        qWarning("No se pudo cargar el archivo.");
        return false;
    }

    QByteArray saveData = loadFile.readAll();

    QJsonDocument loadDoc(saveFormat == Json
        ? QJsonDocument::fromJson(saveData)
        : QJsonDocument::fromBinaryData(saveData));

    leer(loadDoc.object());

    return true;
}

bool Nivel::saveNivel(Nivel::FormatoGuardar saveFormat) const
{
    QFile saveFile(saveFormat == Json
           ? ("configNivel"+QString::number(idNivel)+".json")
           : ("configNivel"+QString::number(idNivel)+".dat"));

    if (!saveFile.open(QIODevice::WriteOnly)) {
        qWarning("Couldn't open save file.");
        return false;
    }

    QJsonObject objNivel;
    escribir(objNivel);
    QJsonDocument saveDoc(objNivel);
    saveFile.write(saveFormat == Json
        ? saveDoc.toJson()
        : saveDoc.toBinaryData());

    return true;
}

QString Nivel::getFondo() const
{
    return fondo;
}

void Nivel::setFondo(const QString &value)
{
    fondo = value;
}

int Nivel::getFrecuencia() const
{
    return frecuencia;
}


