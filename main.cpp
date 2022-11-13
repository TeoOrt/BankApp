#include "mainwindow.h"
#include "databasehandler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   DatabaseHandler dataDB;
    MainWindow w;
    w.show();
    return a.exec();


}
