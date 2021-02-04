/**
 * Project Mad Scientist Scape
 */

#ifndef _PARTIDA_H
#define _PARTIDA_H
#include "Usuario.h"
#include "Jugador.h"
#include "Cientifico.h"
#include <QGraphicsView>
#include <QVector>
#include <QObject>

class Partida: public QObject {
    Q_OBJECT
public:
    Partida(Usuario &usuario);
    Partida(Usuario &usuario, QVector<Jugador> &jugadores);
    void ejecutarPartida();
    void iniciarJuego();

    QGraphicsScene *scene;
    const int NUM_MAX_PLAYERS = 4;
    QVector<Jugador> players;
    unsigned char numPlayers;
    QTimer * timerGame;
private slots:
    void play();
private:
    Usuario user;
    Cientifico * scientist;
    bool continuar = true;

};

#endif //_PARTIDA_H
