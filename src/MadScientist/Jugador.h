/**
 * Project Mad Scientist Scape
 */


#ifndef _JUGADOR_H
#define _JUGADOR_H
#include <QString>

class Jugador {
public: 
    int id;
    QString usuario;
    QString clave;
    double puntaje;
    double distancia;
    int numNivel;
    
void guardar();
};

#endif //_JUGADOR_H
