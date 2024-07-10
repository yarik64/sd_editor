// main.cpp


#include "mainwindow.h"

#include <QApplication>
#include <QCommandLineParser>

#include <iostream>
#include "ssh_conf_parser.h"


// #define const WWIDTH_DEFAULT  800
// #define const WHEIGHT_DEFAULT 600

int main(int argc, char *argv[])
{
	int WWIDTH_DEFAULT  = 800;
	int WHEIGHT_DEFAULT = 600;

	QApplication a(argc, argv);
	MainWindow w;

	QCommandLineParser parser;

	QCommandLineOption optionWidth(
		QStringList() << "w" << "width",
		"window default width",
		"",
		"800");
		// WWIDTH_DEFAULT);

	QCommandLineOption optionHeight(
		QStringList() << "h" << "height",
		"window default height",
		"",
		"600");
		// WHEIGHT_DEFAULT);

	QCommandLineOption output_file(
		QStringList() << "o" << "output",
		"output file name",
		"",
		"output.txt");


	parser.addOption(optionWidth);
	parser.addOption(optionHeight);
	parser.addOption(output_file);
	parser.process(a);

	int WWIDTH  = parser.value(optionWidth ).toInt();
	int WHEIGHT = parser.value(optionHeight).toInt();
	// char[] OUTPUT_FILE = parser.value(output_file);

	ssh_conf_parser p1;
	p1.write_config(parser.value(output_file));

	std::cout <<
		"WWIDTH:="  << WWIDTH
		<< "  " <<
		"WHEIGHT:=" << WHEIGHT
		<< std::endl;
		// "output_file:=" << OUTPUT_FILE

	w.resize(WWIDTH, WHEIGHT);
	w.show();

	return a.exec();
}
