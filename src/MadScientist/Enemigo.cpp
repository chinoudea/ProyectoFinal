#include "Enemigo.h"

#include <QJsonObject>



Enemigo::Enemigo(QString name)
{

    //    setNombre(name);
    //    configPics("walk");
    //    accionUsuario = 1;

}

void Enemigo::leer(const QJsonObject &json)
{
    tipoPersonaje = json["tipoPersonaje"].toInt();
    tipoArma = json["tipoArma"].toString();
    direccion = json["direccion"].toInt();
}

void Enemigo::escribir(QJsonObject &json) const
{
    json["tipoPersonaje"] =tipoPersonaje;
    json["tipoArma"] =tipoArma;
    json["direccion"] =direccion;
}
