#include <iostream>
#include "file_opener.h"

bool open(std::ifstream &in_file, const std::string &file_name) {
	in_file.open(file_name);
	bool is_valid{true};
	if(!in_file) {
		std::cerr << "Error opening file." << std::endl;
		is_valid = false;
	}	
	return is_valid;
}
