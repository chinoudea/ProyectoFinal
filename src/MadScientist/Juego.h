#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include "Partida.h"
#include "DataConnector.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    Juego(QWidget *parent = nullptr);
    ~Juego();
    Partida sesion;
    DataConnector dc;
private slots:

    void on_btnNewGame_pressed();

    void on_btnLogin_pressed();

    void on_navConsole_currentChanged(int arg1);

    void on_btnNextPlayers_pressed();


    void on_btnLoginAuth_pressed();

private:
    Ui::Juego *ui;
};
#endif // JUEGO_H
