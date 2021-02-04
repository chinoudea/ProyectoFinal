/**
 * Project Mad Scientist Scape
 */


#include "Partida.h"

/**
 * Partida implementation
 */

Partida::Partida(Usuario &usuario)
{
    user = usuario;
    scene = new QGraphicsScene();
    scene->setBackgroundBrush(QBrush(QImage(":/levels/bg_5")));
    // Cientifico
    scientist = new Cientifico();
    scientist->setPos(-150,0);
    scientist->setFlag(QGraphicsItem::ItemIsFocusable);
    scientist->setFocus();
    scene->addItem(scientist);
    scene->setFocusItem(scientist);
    timerGame = new QTimer;
    connect(timerGame,SIGNAL(timeout()),this,SLOT(play()));
}

Partida::Partida(Usuario &usuario, QVector<Jugador> &jugadores)
{
    user = usuario;
    players = jugadores;
}

void Partida::ejecutarPartida() {
    //Se recorren los jugadores uno a uno, en forma ciclica
    while (continuar) {
        for(int i = 0; i < players.size()-1; i++ ) {
            //cargarNivel(players[i].numNivel
        }
    }
}

void Partida::iniciarJuego() {
//    // Set Guest User
//    user = usuario;
//    ui->gvScene->setBackgroundBrush(QBrush(QImage(":/levels/bg_1")));
//    // Cientifico
//    scientist = new Cientifico();
//    scientist->setPos(-150,0);
//    scientist->setFlag(QGraphicsItem::ItemIsFocusable);
//    scientist->setFocus();
//    scene->addItem(scientist);
//    scene->setFocusItem(scientist);
//    // Se configura nivel
//    setNivel.insert(1,"enemy0");
//    setNivel.insert(4,"enemy0");
//    setNivel.insert(7,"enemy0");
//    setNivel.insert(10,"enemy0");
//    setNivel.insert(13,"enemy0");
//    setNivel.insert(16,"enemy0");

    //Se configuran Timers
    timerGame->start(20);
//    timerEnemies = new QTimer;
//    connect(timerEnemies,SIGNAL(timeout()),this,SLOT(spawn()));
    //    timerEnemies->start(5000);
}

void Partida::play()
{
    scientist->mover();
}

