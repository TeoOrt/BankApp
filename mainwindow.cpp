#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "baseclient.h"

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





void MainWindow::on_pushButton_clicked(bool checked)
{
    if (checked){
        /*
         * getname()
         * getemail()
         * getaddres()
         * getphonenumber()
         * getss()
         *
         * /
        baseclient NewClient{};
    }
    else{

    }
    }

