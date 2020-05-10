#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include "file_opener.h"

void search_lines(std::ifstream &in_file, const std::string &user_word);

int main() {
	
	std::string user_word {};
	
	std::cout << "Search for: ";
	std::getline(std::cin, user_word);

	std::ifstream in_file;
	std::unique_ptr<FileOpener> fo_ptr = std::make_unique<FileOpener>();			
	search_lines(in_file, user_word);	

	in_file.close();

	return 0;
}

void search_lines(std::ifstream &in_file, const std::string &user_word) {

	std::string line {};
	while(std::getline(in_file, line)) {
	

	}	
}
