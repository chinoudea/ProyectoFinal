#ifndef JUEGO_H
#define JUEGO_H

#include <QGraphicsScene>
#include <QMainWindow>
#include <QDebug>
#include <QKeyEvent>
#include <QTimer>
#include "Partida.h"
#include "DataConnector.h"
#include "Cientifico.h"

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

private slots:

    void on_btnNewGame_pressed();
    void on_btnLogin_pressed();   
    void on_btnToNamePlayers_pressed();
    void on_btnLoginAuth_pressed();
    void play();

    void on_btnNewGame_2_pressed();

    void on_btnNextPlayer_pressed();

private:

    Ui::Juego *ui;
    QGraphicsScene *scene;
    Usuario *user;
    Partida *sesion;
    DataConnector *dc;
    QTimer * timerGame;
    // Objetos a mover
    Cientifico * scientist;
};
#endif // JUEGO_H
