/**
 * Project Mad Scientist Scape
 */

#ifndef _PARTIDA_H
#define _PARTIDA_H
#include "Usuario.h"
#include "Jugador.h"
#include "Cientifico.h"
#include "Nivel.h"
#include <QGraphicsView>
#include <QVector>
#include <QObject>
#include <QJsonArray>

class Partida: public QObject {
    Q_OBJECT
public:
    Partida();
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
    QTimer * timerEnemy;
    void leer(const QJsonObject &json);
    void escribir(QJsonObject &json) const;
    bool loadPartida(SaveFormat saveFormat);
    bool savePartida(SaveFormat saveFormat) const;

signals:
    void changePlayer(QString nombre);
    void centerPlayer(Cientifico *ply);
    void changeSceneRect(QRect dimensiones);
private slots:
    void play();
    void spawn();
private:
    Usuario user;
    Cientifico * scientist;
    Nivel * nivel;
    bool continuar = true;
    int idPartida = 0;
    int tiempoEnemigo=0;

};

#endif //_PARTIDA_H
