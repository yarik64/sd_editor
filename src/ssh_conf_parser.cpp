// ssh_conf_parser.cpp

#include <QFile>
#include <QString>
#include <QTextStream>

#include <iostream>
#include "ssh_conf_parser.h"


ssh_conf_parser::ssh_conf_parser() { }

ssh_conf_parser::~ssh_conf_parser() { }

void ssh_conf_parser::write_config(QString config_path)
{
	QFile data(config_path);

	if (data.open(QFile::WriteOnly | QFile::Truncate)) {
		QTextStream out(&data);
		out << "Result: " << qSetFieldWidth(10) << left << 3.14 << 2.7 << config_path;
		// writes "Result: 3.14      2.7       "
	}

	
}
