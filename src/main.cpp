#include "mainwindow.h"

#include <QApplication>

#define WWIDTH_DEFAULT 800
#define WHEIGHT_DEFAULT 600

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    int WWIDTH  = 0;
    int WHEIGHT = 0;


    w.resize(
        WWIDTH  ? WWIDTH  : WWIDTH_DEFAULT,
        WHEIGHT ? WHEIGHT : WHEIGHT_DEFAULT
    );
    w.show();

    return a.exec();
}
