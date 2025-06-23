/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCharger;
    QAction *actionAfficher_2;
    QAction *actionTaille;
    QAction *actionSauvegarder;
    QAction *actionQuitter;
    QAction *actionRechercher_2;
    QAction *actionInserer;
    QAction *actionSupprimer_2;
    QAction *actionF1;
    QAction *actionF2;
    QAction *actionF3;
    QAction *actionSan;
    QAction *actionHachage_Sans_hachage;
    QAction *actionHachage_fi_hachage_fj;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuMenu_2;
    QMenu *menuQuitter;
    QMenu *menuCourbe_de_comparaison;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(952, 384);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionCharger = new QAction(MainWindow);
        actionCharger->setObjectName(QStringLiteral("actionCharger"));
        actionAfficher_2 = new QAction(MainWindow);
        actionAfficher_2->setObjectName(QStringLiteral("actionAfficher_2"));
        actionTaille = new QAction(MainWindow);
        actionTaille->setObjectName(QStringLiteral("actionTaille"));
        actionSauvegarder = new QAction(MainWindow);
        actionSauvegarder->setObjectName(QStringLiteral("actionSauvegarder"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionRechercher_2 = new QAction(MainWindow);
        actionRechercher_2->setObjectName(QStringLiteral("actionRechercher_2"));
        actionInserer = new QAction(MainWindow);
        actionInserer->setObjectName(QStringLiteral("actionInserer"));
        actionSupprimer_2 = new QAction(MainWindow);
        actionSupprimer_2->setObjectName(QStringLiteral("actionSupprimer_2"));
        actionF1 = new QAction(MainWindow);
        actionF1->setObjectName(QStringLiteral("actionF1"));
        actionF2 = new QAction(MainWindow);
        actionF2->setObjectName(QStringLiteral("actionF2"));
        actionF3 = new QAction(MainWindow);
        actionF3->setObjectName(QStringLiteral("actionF3"));
        actionSan = new QAction(MainWindow);
        actionSan->setObjectName(QStringLiteral("actionSan"));
        actionHachage_Sans_hachage = new QAction(MainWindow);
        actionHachage_Sans_hachage->setObjectName(QStringLiteral("actionHachage_Sans_hachage"));
        actionHachage_fi_hachage_fj = new QAction(MainWindow);
        actionHachage_fi_hachage_fj->setObjectName(QStringLiteral("actionHachage_fi_hachage_fj"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 300, 71, 31));
        pushButton->setStyleSheet(QStringLiteral("color:green;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 300, 71, 31));
        pushButton_2->setStyleSheet(QStringLiteral("color:green;"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(75, 30, 571, 192));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 952, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuMenu_2 = new QMenu(menuBar);
        menuMenu_2->setObjectName(QStringLiteral("menuMenu_2"));
        menuQuitter = new QMenu(menuBar);
        menuQuitter->setObjectName(QStringLiteral("menuQuitter"));
        menuCourbe_de_comparaison = new QMenu(menuBar);
        menuCourbe_de_comparaison->setObjectName(QStringLiteral("menuCourbe_de_comparaison"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuMenu_2->menuAction());
        menuBar->addAction(menuQuitter->menuAction());
        menuBar->addAction(menuCourbe_de_comparaison->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuMenu->addAction(actionCharger);
        menuMenu->addAction(actionAfficher_2);
        menuMenu->addAction(actionTaille);
        menuMenu->addAction(actionSauvegarder);
        menuMenu->addAction(actionQuitter);
        menuMenu_2->addAction(actionRechercher_2);
        menuMenu_2->addAction(actionInserer);
        menuMenu_2->addAction(actionSupprimer_2);
        menuQuitter->addAction(actionF1);
        menuQuitter->addAction(actionF2);
        menuQuitter->addAction(actionF3);
        menuQuitter->addAction(actionSan);
        menuCourbe_de_comparaison->addAction(actionHachage_Sans_hachage);
        menuCourbe_de_comparaison->addAction(actionHachage_fi_hachage_fj);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCharger->setText(QApplication::translate("MainWindow", "Charger", 0));
        actionAfficher_2->setText(QApplication::translate("MainWindow", "Afficher", 0));
        actionTaille->setText(QApplication::translate("MainWindow", "Taille", 0));
        actionSauvegarder->setText(QApplication::translate("MainWindow", "Sauvegarder", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionRechercher_2->setText(QApplication::translate("MainWindow", "Rechercher", 0));
        actionInserer->setText(QApplication::translate("MainWindow", "Inserer", 0));
        actionSupprimer_2->setText(QApplication::translate("MainWindow", "Supprimer", 0));
        actionF1->setText(QApplication::translate("MainWindow", "f1", 0));
        actionF2->setText(QApplication::translate("MainWindow", "f2", 0));
        actionF3->setText(QApplication::translate("MainWindow", "f3", 0));
        actionSan->setText(QApplication::translate("MainWindow", "SansHash", 0));
        actionHachage_Sans_hachage->setText(QApplication::translate("MainWindow", "hachage/Sans hachage", 0));
        actionHachage_fi_hachage_fj->setText(QApplication::translate("MainWindow", "hachage (fi)/ hachage (fj)", 0));
        pushButton->setText(QApplication::translate("MainWindow", "suiv", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "prec", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Base", 0));
        menuMenu_2->setTitle(QApplication::translate("MainWindow", "Maison", 0));
        menuQuitter->setTitle(QApplication::translate("MainWindow", "FonctionHachage", 0));
        menuCourbe_de_comparaison->setTitle(QApplication::translate("MainWindow", "Courbes de comparaison", 0));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
