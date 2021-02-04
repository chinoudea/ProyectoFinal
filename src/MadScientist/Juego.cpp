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
    //Configuracion de vista

    //ui->gvScene->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gvScene->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gvScene->setFixedSize(800,600);
    // Set the scene
    //scene = new QGraphicsScene();
    ui->gvScene->setSceneRect(0,0,2445,600);
    //ui->gvScene->setScene(scene);
    ui->gvScene->centerOn(-150,0);

}

Juego::~Juego()
{
    delete ui;
}

//Accion de boton LOGIN
void Juego::on_btnLogin_pressed()
{
    // Clean Login Screen
    ui->txtUser->setText("");
    ui->txtPass->setText("");
    // Move to login screen
    ui->navConsole->setCurrentIndex(1);
}

//Accion de boton NUEVO JUEGO sin login
void Juego::on_btnNewGame_pressed()
{
    // Create User
    Usuario guest = *new Usuario();
    // Create new session
    sesion = new Partida(guest);
    configSlots();
    // Set de maximum number of players.
    ui->txtNumPlayers->setMaximum(sesion->NUM_MAX_PLAYERS);
    // Move to num players screen
    ui->navConsole->setCurrentIndex(2);
}

//Accion de boton confirmando el numero de jugadores
void Juego::on_btnToNamePlayers_pressed()
{    
    // Get the number of players
    sesion->numPlayers = ui->txtNumPlayers->text().toInt();
    // Move to players name screen
    ui->navConsole->setCurrentIndex(3);    
}

//Accion de boton de proximo jugador, escribiendo nombres
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
        // Si ya se capturaron todos los nombres lleva a pantalla de juego
        if (sesion->players.size() == sesion->numPlayers) {
            ui->lblNumNamePlayer->setText("Player 1 Name");
            // Config scene
            ui->gvScene->setScene(sesion->scene);
            // Move to players scene screen
            ui->navConsole->setCurrentIndex(5);
            sesion->iniciarJuego();
        } else {
            ui->lblNumNamePlayer->setText("Player "+QString::number(sesion->players.size()+1)+" Name");
        }
    }
}

//Accion de boton para autenticar usuario
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
        user=new Usuario(idUser,usuario);
        //Clear data inputs
        ui->txtUser->setText("");
        ui->txtPass->setText("");
        //Move to Auth User Screen
        ui->navConsole->setCurrentIndex(4);
    } else {
        ui->lblMensaje->show();
    }
}

//Accion de boton NUEVO JUEGO usuario autenticado
void Juego::on_btnNewGame_2_pressed()
{
    // Create new session
    sesion = new Partida(*user);
    configSlots();
    // Set de maximum number of players.
    ui->txtNumPlayers->setMaximum(sesion->NUM_MAX_PLAYERS);
    // Move to num players screen
    ui->navConsole->setCurrentIndex(2);
}
//Accion de boton CARGAR JUEGO usuario autenticado
void Juego::on_btnLoadSession_pressed()
{
    // Create new session
    sesion = new Partida(*user);
    sesion->loadPartida(Partida::SaveFormat::Json);
    configSlots();
    //scientist->
    // Move to game screen
    ui->navConsole->setCurrentIndex(5);
    sesion->iniciarJuego();
}



void Juego::cargarNivel(int nivel){
        //Se configura el rect de la escena
        //Se configura el fondo
    //Se configuran los enemigos
}

void Juego::configSlots()
{
    connect(sesion, SIGNAL(changePlayer(QString)), this, SLOT(updatePlayerName(QString)));
    connect(sesion,SIGNAL(changeSceneRect(QRect*)),this,SLOT(changeSceneRect(QRect*)));
    connect(sesion,SIGNAL(centerPlayer(Cientifico*)),this,SLOT(centerCientifico(Cientifico*)));


}

void Juego::updatePlayerName(QString nombre)
{
    ui->nombreJugador->setText(nombre);
}

void Juego::centerCientifico(Cientifico *ply)
{
    ui->gvScene->centerOn(ply);
}

void Juego::changeSceneRect(QRect dimensiones)
{
    ui->gvScene->setSceneRect(dimensiones);
}


