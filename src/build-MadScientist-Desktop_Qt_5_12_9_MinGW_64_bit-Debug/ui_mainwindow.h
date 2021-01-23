/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
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
    QPushButton *btnNewGame_2;
    QWidget *numPlayersPage;
    QLabel *label_5;
    QSpinBox *txtNumPlayers;
    QLabel *label_6;
    QPushButton *btnNextPlayers;
    QWidget *page;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QPushButton *btnNextPlayers_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
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
        btnNewGame_2 = new QPushButton(loginPage);
        btnNewGame_2->setObjectName(QString::fromUtf8("btnNewGame_2"));
        btnNewGame_2->setGeometry(QRect(340, 420, 118, 42));
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
        btnNewGame_2->setPalette(palette4);
        btnNewGame_2->setFont(font);
        btnNewGame_2->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
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
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_6->setPalette(palette5);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/bkg_login);"));
        btnNextPlayers = new QPushButton(numPlayersPage);
        btnNextPlayers->setObjectName(QString::fromUtf8("btnNextPlayers"));
        btnNextPlayers->setGeometry(QRect(350, 400, 118, 42));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnNextPlayers->setPalette(palette6);
        btnNextPlayers->setFont(font);
        btnNextPlayers->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        navConsole->addWidget(numPlayersPage);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 120, 377, 160));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/logo);"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(340, 290, 141, 20));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_8->setPalette(palette7);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/bkg_login);"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(300, 340, 221, 31));
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/transparent);"));
        btnNextPlayers_2 = new QPushButton(page);
        btnNextPlayers_2->setObjectName(QString::fromUtf8("btnNextPlayers_2"));
        btnNextPlayers_2->setGeometry(QRect(350, 400, 118, 42));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
        btnNextPlayers_2->setPalette(palette8);
        btnNextPlayers_2->setFont(font);
        btnNextPlayers_2->setStyleSheet(QString::fromUtf8("background-image: url(:/userInterface/boton1);\n"
"background-color: transparent;"));
        navConsole->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(btnLogin, SIGNAL(pressed()), navConsole, SLOT(update()));

        navConsole->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        btnLogin->setText(QApplication::translate("MainWindow", "Login", nullptr));
        btnNewGame->setText(QApplication::translate("MainWindow", "New Game", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "User:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        btnNewGame_2->setText(QApplication::translate("MainWindow", "Login", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "How many players?", nullptr));
        btnNextPlayers->setText(QApplication::translate("MainWindow", "Continue", nullptr));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "Player 1  Name", nullptr));
        btnNextPlayers_2->setText(QApplication::translate("MainWindow", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
