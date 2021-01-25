/**
 * Project Mad Scientist Scape
 */


#ifndef _JUGADOR_H
#define _JUGADOR_H
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
};

#endif //_JUGADOR_H
