#include "Juego.h"
#include "ui_Juego.h"
#include <QDebug>

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    // Hide de error message in login page
    ui->lblMensaje->hide();
    // Set the initial page
    ui->navConsole->setCurrentIndex(0);
    // Set de maximum number of players.
    ui->txtNumPlayers->setMaximum(sesion.NUM_MAX_PLAYERS);
    // Initialize data connector
    dc = *new DataConnector();
}

Juego::~Juego()
{
    delete ui;
}


void Juego::on_btnNewGame_pressed()
{    
    // Move to num players screen
    ui->navConsole->setCurrentIndex(2);
}

void Juego::on_btnLogin_pressed()
{
    // Clean Login Screen
    ui->txtUser->setText("");
    ui->txtPass->setText("");
    // Move to login screen
    ui->navConsole->setCurrentIndex(1);
}

void Juego::on_navConsole_currentChanged(int arg1)
{
    qDebug() << &"Se mapeo un cambio y argumento es " [ arg1];
}

void Juego::on_btnNextPlayers_pressed()
{
    int numPlayers = 0;
    // Get the number of players
    numPlayers = ui->txtNumPlayers->text().toInt();
    // Move to players name screen
    ui->navConsole->setCurrentIndex(3);    
}

void Juego::on_btnLoginAuth_pressed()
{
    //Hide Error Login Label
    ui->lblMensaje->hide();
    //Get the user input
    QString usuario = ui->txtUser->text();
    QString password = ui->txtPass->text();
    qDebug() << "Se capturaron los datos: " << usuario << " y " << password;
    //Validate login data
    if (dc.authUser(usuario,password)) {
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
