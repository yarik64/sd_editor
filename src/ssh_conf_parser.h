// ssh_conf_parser.h

#ifndef SSH_CONF_PARSER_H
#define SSH_CONF_PARSER_H

#include <QString>



class ssh_conf_parser {

	public :
		ssh_conf_parser();
		~ssh_conf_parser();
		void write_config(QString config_path);

	private :


};

#endif
