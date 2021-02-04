/********************************************************************************
** Form generated from reading UI file 'Juego.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Juego
{
public:
    QWidget *centralwidget;
    QStackedWidget *navConsole;
    QWidget *initPage;
    QLabel *label;
    QPushButton *btnLogin;
    QPushButton *btnNewGame;
    QWidget *loginPage;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtUser;
    QLineEdit *txtPass;
    QPushButton *btnLoginAuth;
    QLabel *lblMensaje;
    QWidget *numPlayersPage;
    QLabel *label_5;
    QSpinBox *txtNumPlayers;
    QLabel *label_6;
    QPushButton *btnToNamePlayers;
    QWidget *namePlayersPage;
    QLabel *label_7;
    QLabel *lblNumNamePlayer;
    QLineEdit *txtNamePlayer;
    QPushButton *btnNextPlayer;
    QLabel *lblNameMsg;
    QWidget *authUserPage;
    QPushButton *btnLoadSession;
    QPushButton *btnNewGame_2;
    QLabel *label_9;
    QWidget *scenePage;
    QGraphicsView *gvScene;

    void setupUi(QMainWindow *Juego)
    {
        if (Juego->objectName().isEmpty())
            Juego->setObjectName(QString::fromUtf8("Juego"));
        Juego->resize(800, 600);
        Juego->setMaximumSize(QSize(800, 600));
        Juego->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Juego);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        navConsole = new QStackedWidget(centralwidget);
        navConsole->setObjectName(QString::fromUtf8("navConsole"));
        navConsole->setGeometry(QRect(0, 0, 800, 600));
        navConsole->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/landing);"));
        initPage = new QWidget();
        initPage->setObjectName(QString::fromUtf8("initPage"));
        label = new QLabel(initPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 120, 377, 160));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/logo);"));
        btnLogin = new QPushButton(initPage);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(220, 381, 118, 42));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnLogin->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Snap ITC"));
        font.setPointSize(12);
        btnLogin->setFont(font);
        btnLogin->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        btnNewGame = new QPushButton(initPage);
        btnNewGame->setObjectName(QString::fromUtf8("btnNewGame"));
        btnNewGame->setGeometry(QRect(460, 380, 118, 42));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnNewGame->setPalette(palette1);
        btnNewGame->setFont(font);
        btnNewGame->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        navConsole->addWidget(initPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        label_2 = new QLabel(loginPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 120, 377, 160));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/logo);"));
        label_3 = new QLabel(loginPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 310, 151, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_3->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Snap ITC"));
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/bkg_login);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(loginPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 360, 151, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_4->setPalette(palette3);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/bkg_login);"));
        label_4->setAlignment(Qt::AlignCenter);
        txtUser = new QLineEdit(loginPage);
        txtUser->setObjectName(QString::fromUtf8("txtUser"));
        txtUser->setGeometry(QRect(390, 310, 171, 31));
        txtUser->setFont(font);
        txtUser->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/transparent);"));
        txtPass = new QLineEdit(loginPage);
        txtPass->setObjectName(QString::fromUtf8("txtPass"));
        txtPass->setGeometry(QRect(390, 360, 171, 31));
        txtPass->setFont(font);
        txtPass->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/transparent);"));
        txtPass->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        txtPass->setEchoMode(QLineEdit::Password);
        btnLoginAuth = new QPushButton(loginPage);
        btnLoginAuth->setObjectName(QString::fromUtf8("btnLoginAuth"));
        btnLoginAuth->setGeometry(QRect(340, 420, 118, 42));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnLoginAuth->setPalette(palette4);
        btnLoginAuth->setFont(font);
        btnLoginAuth->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        lblMensaje = new QLabel(loginPage);
        lblMensaje->setObjectName(QString::fromUtf8("lblMensaje"));
        lblMensaje->setGeometry(QRect(580, 340, 201, 21));
        QPalette palette5;
        QBrush brush3(QColor(255, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        lblMensaje->setPalette(palette5);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Roboto"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lblMensaje->setFont(font2);
        lblMensaje->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/bkg_login);"));
        lblMensaje->setAlignment(Qt::AlignCenter);
        navConsole->addWidget(loginPage);
        numPlayersPage = new QWidget();
        numPlayersPage->setObjectName(QString::fromUtf8("numPlayersPage"));
        label_5 = new QLabel(numPlayersPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 120, 377, 160));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/logo);"));
        txtNumPlayers = new QSpinBox(numPlayersPage);
        txtNumPlayers->setObjectName(QString::fromUtf8("txtNumPlayers"));
        txtNumPlayers->setGeometry(QRect(360, 340, 101, 31));
        txtNumPlayers->setFont(font);
        txtNumPlayers->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/transparent);"));
        txtNumPlayers->setAlignment(Qt::AlignCenter);
        txtNumPlayers->setMinimum(1);
        txtNumPlayers->setMaximum(2);
        txtNumPlayers->setValue(1);
        label_6 = new QLabel(numPlayersPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 300, 191, 20));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_6->setPalette(palette6);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/bkg_login);"));
        btnToNamePlayers = new QPushButton(numPlayersPage);
        btnToNamePlayers->setObjectName(QString::fromUtf8("btnToNamePlayers"));
        btnToNamePlayers->setGeometry(QRect(350, 400, 118, 42));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnToNamePlayers->setPalette(palette7);
        btnToNamePlayers->setFont(font);
        btnToNamePlayers->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        navConsole->addWidget(numPlayersPage);
        namePlayersPage = new QWidget();
        namePlayersPage->setObjectName(QString::fromUtf8("namePlayersPage"));
        label_7 = new QLabel(namePlayersPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 120, 377, 160));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/logo);"));
        lblNumNamePlayer = new QLabel(namePlayersPage);
        lblNumNamePlayer->setObjectName(QString::fromUtf8("lblNumNamePlayer"));
        lblNumNamePlayer->setGeometry(QRect(340, 300, 141, 20));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        lblNumNamePlayer->setPalette(palette8);
        lblNumNamePlayer->setFont(font);
        lblNumNamePlayer->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/bkg_login);"));
        txtNamePlayer = new QLineEdit(namePlayersPage);
        txtNamePlayer->setObjectName(QString::fromUtf8("txtNamePlayer"));
        txtNamePlayer->setGeometry(QRect(300, 340, 221, 31));
        txtNamePlayer->setFont(font1);
        txtNamePlayer->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/transparent);"));
        txtNamePlayer->setInputMethodHints(Qt::ImhNone);
        txtNamePlayer->setMaxLength(10);
        btnNextPlayer = new QPushButton(namePlayersPage);
        btnNextPlayer->setObjectName(QString::fromUtf8("btnNextPlayer"));
        btnNextPlayer->setGeometry(QRect(350, 400, 118, 42));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnNextPlayer->setPalette(palette9);
        btnNextPlayer->setFont(font);
        btnNextPlayer->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        lblNameMsg = new QLabel(namePlayersPage);
        lblNameMsg->setObjectName(QString::fromUtf8("lblNameMsg"));
        lblNameMsg->setGeometry(QRect(530, 345, 251, 21));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        lblNameMsg->setPalette(palette10);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto"));
        font3.setPointSize(12);
        lblNameMsg->setFont(font3);
        lblNameMsg->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/bkg_login);"));
        navConsole->addWidget(namePlayersPage);
        authUserPage = new QWidget();
        authUserPage->setObjectName(QString::fromUtf8("authUserPage"));
        btnLoadSession = new QPushButton(authUserPage);
        btnLoadSession->setObjectName(QString::fromUtf8("btnLoadSession"));
        btnLoadSession->setGeometry(QRect(250, 371, 118, 42));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnLoadSession->setPalette(palette11);
        btnLoadSession->setFont(font);
        btnLoadSession->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        btnNewGame_2 = new QPushButton(authUserPage);
        btnNewGame_2->setObjectName(QString::fromUtf8("btnNewGame_2"));
        btnNewGame_2->setGeometry(QRect(490, 370, 118, 42));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnNewGame_2->setPalette(palette12);
        btnNewGame_2->setFont(font);
        btnNewGame_2->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        label_9 = new QLabel(authUserPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(210, 120, 377, 160));
        label_9->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/logo);"));
        navConsole->addWidget(authUserPage);
        scenePage = new QWidget();
        scenePage->setObjectName(QString::fromUtf8("scenePage"));
        gvScene = new QGraphicsView(scenePage);
        gvScene->setObjectName(QString::fromUtf8("gvScene"));
        gvScene->setGeometry(QRect(0, 0, 800, 600));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gvScene->sizePolicy().hasHeightForWidth());
        gvScene->setSizePolicy(sizePolicy);
        navConsole->addWidget(scenePage);
        Juego->setCentralWidget(centralwidget);

        retranslateUi(Juego);

        navConsole->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(Juego);
    } // setupUi

    void retranslateUi(QMainWindow *Juego)
    {
        Juego->setWindowTitle(QApplication::translate("Juego", "Mad Scientist", nullptr));
        label->setText(QString());
        btnLogin->setText(QApplication::translate("Juego", "Login", nullptr));
        btnNewGame->setText(QApplication::translate("Juego", "New Game", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Juego", "User:", nullptr));
        label_4->setText(QApplication::translate("Juego", "Password:", nullptr));
        btnLoginAuth->setText(QApplication::translate("Juego", "Login", nullptr));
        lblMensaje->setText(QApplication::translate("Juego", "Login error, try again.", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("Juego", "How many players?", nullptr));
        btnToNamePlayers->setText(QApplication::translate("Juego", "Continue", nullptr));
        label_7->setText(QString());
        lblNumNamePlayer->setText(QApplication::translate("Juego", "Player 1 Name", nullptr));
        btnNextPlayer->setText(QApplication::translate("Juego", "Continue", nullptr));
        lblNameMsg->setText(QString());
        btnLoadSession->setText(QApplication::translate("Juego", "Load Game", nullptr));
        btnNewGame_2->setText(QApplication::translate("Juego", "New Game", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Juego: public Ui_Juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
