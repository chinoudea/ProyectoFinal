/**
 * Project Mad Scientist Scape
 */


#include "Partida.h"

#include <QJsonDocument>



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

Partida::Partida(Usuario &usuario, QList<Jugador> &jugadores)
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
    savePartida(SaveFormat::Json);
    //Se configuran Timers
    timerGame->start(20);
//    timerEnemies = new QTimer;
//    connect(timerEnemies,SIGNAL(timeout()),this,SLOT(spawn()));
    //    timerEnemies->start(5000);
}

void Partida::read(const QJsonObject &json)
{
    idPartida = json["id"].toInt();
    user.read(json["usuario"].toObject());
    players.clear();
    QJsonArray tmpArray = json["jugadores"].toArray();
    for(int index = 0; index < tmpArray.size(); ++index) {
        QJsonObject objJugador = tmpArray[index].toObject();
        Jugador j;
        j.read(objJugador);
        players.append(j);
    }
}

void Partida::write(QJsonObject &json) const
{
    json["id"]=idPartida;
    QJsonObject objUsuario;
    user.write(objUsuario);
    json["usuario"] = objUsuario;

    QJsonArray tmpArray;
    for (int index = 0; index < players.size(); ++index) {
        QJsonObject objPlayer;
        players[index].write(objPlayer);
        tmpArray.append(objPlayer);
    }
    json["jugadores"]=tmpArray;
}

bool Partida::savePartida(Partida::SaveFormat saveFormat) const
{
    QFile saveFile(saveFormat == Json
        ? QStringLiteral("save.json")
        : QStringLiteral("save.dat"));

    if (!saveFile.open(QIODevice::WriteOnly)) {
        qWarning("Couldn't open save file.");
        return false;
    }

    QJsonObject objPartida;
    write(objPartida);
    QJsonDocument saveDoc(objPartida);
    saveFile.write(saveFormat == Json
        ? saveDoc.toJson()
        : saveDoc.toBinaryData());

    return true;
}

void Partida::play()
{
    scientist->mover();
}

