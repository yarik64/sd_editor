#include "mainwindow.h"

#include <QApplication>
#include <QCommandLineParser>

#include <iostream>


#define WWIDTH_DEFAULT  800
#define WHEIGHT_DEFAULT 600

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QCommandLineParser parser;

    QCommandLineOption optionWidth(
         QStringList() << "w" << "width",
         "window default width",
         "",
         "800");
         // "WWIDTH_DEFAULT");

    QCommandLineOption optionHeight(
         QStringList() << "h" << "height",
         "window default height",
         "",
         "600");
         // "WHEIGHT_DEFAULT");

    parser.addOption(optionWidth);
    parser.addOption(optionHeight);
    parser.process(a);

    int WWIDTH  = parser.value(optionWidth ).toInt();
    int WHEIGHT = parser.value(optionHeight).toInt();

    std::cout << "WWIDTH:=" << WWIDTH << "  " << "WHEIGHT:=" << WHEIGHT << std::endl;

    w.resize(WWIDTH, WHEIGHT);
    w.show();

    return a.exec();
}
