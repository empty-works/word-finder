#ifndef FILE_OPENER_H_
#define FILE_OPENER_H_

#include <iostream>
#include <fstream>

class FileOpener {
	private:
		std::ifstream in_file{};
	public:
		FileOpener(std::ifstream in_file) 
			:in_file{in_file}{}
};

#endif
