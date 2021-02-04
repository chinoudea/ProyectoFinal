/**
 * Project Mad Scientist Scape
 */


#ifndef _JUGADOR_H
#define _JUGADOR_H
#include <QJsonObject>
#include <QString>

class Jugador {
public:
    Jugador();
    Jugador(QString name);
    QString nombre;
    unsigned int puntaje;
    unsigned int distanciaRecorrida;
    unsigned char numNivel;
    unsigned char numCheckPoint;    
    void guardar();
    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;
};

#endif //_JUGADOR_H
