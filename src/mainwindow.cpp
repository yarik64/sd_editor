// mainwindow.cpp

#include "mainwindow.h"
#include <QGridLayout>
#include <QPushButton>
#include <QVector>
#include <QString>
#include <QStringList>


MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	QStringList button_names = {
		"One",
		"Two",
		"Three",
		"Four",
		"Five"
	};

	QList<QPushButton*> buttons;
	QWidget     *window = new QWidget;
	QVBoxLayout *layout = new QVBoxLayout(window);

	for (QString      btn : button_names) buttons.append(new QPushButton(btn));
	for (QPushButton *btn : buttons     ) layout->addWidget(btn);
	this->setCentralWidget(window);
}

MainWindow::~MainWindow()
{
}

