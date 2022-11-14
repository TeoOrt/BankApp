#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "baseclient.h"
#include <QDebug>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{

    if()// if text field fills all of the requirements
    QMessageBox::information(this,"Title here","Client Account Has been created");

}

