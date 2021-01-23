/**
 * Project Mad Scientist Scape
 */

#ifndef _PARTIDA_H
#define _PARTIDA_H
#include "Usuario.h"
#include "Jugador.h"
#include <QVector>

class Partida {
public:
    Partida();
    const int NUM_MAX_PLAYERS = 4;
    Usuario user;
    QVector<Jugador> players;
private:
    QString guestGenerator();
};

#endif //_PARTIDA_H
