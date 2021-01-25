#include "Juego.h"
#include "ui_Juego.h"


Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    // Hide de error message in login page
    ui->lblMensaje->hide();
    // Set the initial page
    ui->navConsole->setCurrentIndex(0);
    // Set Regular Expression for names
    QRegularExpression rx("([a-zA-Z0-9\\_]\\w+)");
    QValidator *validator = new QRegularExpressionValidator(rx, this);
    ui->txtNamePlayer->setValidator(validator);
    // Initialize data connector
    dc = new DataConnector();
    // Set the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,2445,600);
    ui->gvScene->setScene(scene);
    // Set Guest User
    user = new Usuario();
    // Cientifico
    scientist = new Cientifico();
    scene->addItem(scientist);
    //Se configuran Timers
    timerGame = new QTimer;
    connect(timerGame,SIGNAL(timeout()),this,SLOT(mover()));
    //timerGame->start(20);
}

Juego::~Juego()
{
    delete ui;
}

void Juego::on_btnLogin_pressed()
{
    // Clean Login Screen
    ui->txtUser->setText("");
    ui->txtPass->setText("");
    // Move to login screen
    ui->navConsole->setCurrentIndex(1);
}

void Juego::on_btnNewGame_pressed()
{
    // Create new session
    sesion = new Partida();
    // Set de maximum number of players.
    ui->txtNumPlayers->setMaximum(sesion->NUM_MAX_PLAYERS);
    // Move to num players screen
    ui->navConsole->setCurrentIndex(2);
}

void Juego::on_btnToNamePlayers_pressed()
{    
    // Get the number of players
    sesion->numPlayers = ui->txtNumPlayers->text().toInt();
    // Move to players name screen
    ui->navConsole->setCurrentIndex(3);    
}

void Juego::on_btnNextPlayer_pressed()
{
    ui->lblNameMsg->setText("");
    QString txtName = ui->txtNamePlayer->text();
    txtName = txtName.simplified();
    if (txtName.size() < 3) {
        ui->lblNameMsg->setText("Debe tener mínimo 3 caracteres.");
    } else {
        Jugador tempPlayer = Jugador(txtName);
        sesion->players.append(tempPlayer);
        ui->txtNamePlayer->setText("");
        if (sesion->players.size() == sesion->numPlayers) {
            ui->lblNumNamePlayer->setText("Player 1 Name");
            // Move to players scene screen
            ui->navConsole->setCurrentIndex(3);
        } else {
            ui->lblNumNamePlayer->setText("Player "+QString::number(sesion->players.size()+1)+" Name");
        }
    }
}

void Juego::on_btnLoginAuth_pressed()
{
    int idUser = 0;
    //Hide Error Login Label
    ui->lblMensaje->hide();
    //Get the user input
    QString usuario = ui->txtUser->text();
    QString password = ui->txtPass->text();
    qDebug() << "Se capturaron los datos: " << usuario << " y " << password;
    //Validate login data
    idUser = dc->authUser(usuario,password);
    if (idUser > 0) {
        qDebug() << "Autenticacion correcta!";
        //Clear data inputs
        ui->txtUser->setText("");
        ui->txtPass->setText("");
        //Move to Auth User Screen
        ui->navConsole->setCurrentIndex(4);
    } else {
        ui->lblMensaje->show();
    }
}

void Juego::keyPressEvent(QKeyEvent *event)
{
    // The keyboard events are tracked only in the scene page
    if (ui->navConsole->currentIndex() == 5) {

    }
    if (event->key() == Qt::Key_Right) {

    }
    // Validate if game is active
//    if(playing && !lost) {
//        playing = true;
//        player->setPlaylist(playlist);
//        player->play();
//        timerGame->start(25);
//        ghost1->moving = true;
//        ghost2->moving = true;
//        ghost3->moving = true;
//        ghost4->moving = true;
//        pacman->t->start(8);
//    }
//    if (event->key() == Qt::Key_A) {
//        pacman->direction = 0;
//    } else if (event->key() == Qt::Key_D) {
//        pacman->direction = 1;
//    } else if (event->key() == Qt::Key_W) {
//        pacman->direction = 2;
//    } else if (event->key() == Qt::Key_S) {
//        pacman->direction = 3;
//    } else if (event->key() == Qt::Key_Space) {
//        if (!lost) {
//            pacman->t->stop();
//            player->stop();
//            timerGame->stop();
//            playing=false;
//        } else {
//            restart();
//        }
//    }

}

void Juego::mover() {
    qDebug() << "Entre a mover " << QString::number(scientist->indexPic);
    scientist->mover();
}

void Juego::on_btnNewGame_2_pressed()
{
    // Create new session
    sesion = new Partida();
    // Set de maximum number of players.
    ui->txtNumPlayers->setMaximum(sesion->NUM_MAX_PLAYERS);
    // Move to num players screen
    ui->navConsole->setCurrentIndex(2);
}


