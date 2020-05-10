#ifndef FILE_OPENER_H_
#define FILE_OPENER_H_

#include <iostream>
#include <fstream>
#include <string>

class FileOpener {
	private:
		std::ifstream in_file_{};
	public:
		FileOpener(){}
		bool open(std::ifstream &in_file, const std::string &file_name);
};

#endif
