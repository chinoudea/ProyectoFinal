#ifndef JUEGO_H
#define JUEGO_H

#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QMainWindow>
#include <QDebug>
#include <QKeyEvent>
#include <QTimer>
#include "Partida.h"
#include "DataConnector.h"
#include "Cientifico.h"
#include "Enemigo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT

public:

    Juego(QWidget *parent = nullptr);
    ~Juego();
    void testFunc();    
    void iniciarJuego();
    void ejecutarPartida();
    void cargarNivel(int nivel);
    void configSlots();
public slots:
    void updatePlayerName(QString nombre);
    void centerCientifico(Cientifico *ply);
     void changeSceneRect(QRect dimensiones);
private slots:

    void on_btnNewGame_pressed();
    void on_btnLogin_pressed();   
    void on_btnToNamePlayers_pressed();
    void on_btnLoginAuth_pressed();
    void on_btnNewGame_2_pressed();
    void on_btnNextPlayer_pressed();

    void on_btnLoadSession_pressed();

private:

    Ui::Juego *ui;
    QGraphicsScene *scene;
    Usuario *user;
    Partida *sesion;
    DataConnector *dc;
    QTimer * timerGame;
    QTimer * timerEnemies;
    int navegado;
    bool continuar=true;
    // Objetos a mover
    Cientifico * scientist;
    //QList<Enemigo *> enemigos;
    QMap<int,QString> setNivel;
    int tiempoEnemigo=0;
};
#endif // JUEGO_H
