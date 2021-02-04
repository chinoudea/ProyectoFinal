/**
 * Project Mad Scientist Scape
 */


#include "Jugador.h"

/**
 * Jugador implementation
 */


Jugador::Jugador()
{

}

Jugador::Jugador(QString name)
{
    nombre = name;
    puntaje = 0;
    distanciaRecorrida = 0;
    numNivel=1;
    numCheckPoint=0;
}

void Jugador::leer(const QJsonObject &json)
{
    nombre = json["name"].toString();
    puntaje = json["score"].toInt();
    distanciaRecorrida = json["distance"].toInt();
    numNivel = json["level"].toInt();
    numCheckPoint = json["checkpoint"].toInt();
}

void Jugador::escribir(QJsonObject &json) const
{
    int tmpPuntaje = puntaje;
    int tmpDistancia = distanciaRecorrida;
    json["name"] = nombre;
    json["score"] = tmpPuntaje;
    json["distance"] = tmpDistancia;
    json["level"] = numNivel;
    json["checkpoint"] = numCheckPoint;
}

