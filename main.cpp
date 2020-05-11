#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include "file_opener.h"
#include "line_reader.h"

int main() {
	
	std::string user_word{};
	
	std::cout << "Search for: ";
	std::getline(std::cin, user_word);

	std::ifstream in_file;
	std::unique_ptr<FileOpener> fo_ptr = std::make_unique<FileOpener>();
	bool is_valid = fo_ptr->OpenFile(in_file, "romeojuliet.txt");
	if(!is_valid) {return 1;}

	std::unique_ptr<LineReader> lr_ptr = std::make_unique<LineReader>();

	in_file.close();

	return 0;
}
