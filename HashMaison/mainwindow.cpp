#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QLabel>
#include <QMenu>
#include <QAction>
#include <QDebug>
#include <QVBoxLayout>
#include "connexiondb.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   if(!Connectionbd())
        exit(-1);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCharger_triggered()
{

}

void MainWindow::on_actionAfficher_2_triggered()
{

}

void MainWindow::on_actionTaille_triggered()
{

}

void MainWindow::on_actionSauvegarder_triggered()
{

}
