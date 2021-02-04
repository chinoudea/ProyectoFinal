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
#include <QJsonArray>

class Partida: public QObject {
    Q_OBJECT
public:
    Partida(Usuario &usuario);
    Partida(Usuario &usuario, QList<Jugador> &jugadores);
    enum SaveFormat {
        Json, Binary
    };
    void ejecutarPartida();
    void iniciarJuego();

    QGraphicsScene *scene;
    const int NUM_MAX_PLAYERS = 4;
    QList<Jugador> players;
    unsigned char numPlayers;
    QTimer * timerGame;
    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;
    bool loadPartida(SaveFormat saveFormat);
    bool savePartida(SaveFormat saveFormat) const;
private slots:
    void play();
private:
    Usuario user;
    Cientifico * scientist;
    bool continuar = true;
    int idPartida = 0;

};

#endif //_PARTIDA_H
