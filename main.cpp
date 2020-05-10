#include <iostream>
#include <fstream>
#include <string>

void open_file(std::ifstream &);

int main() {
	
	std::string user_word {};
	
	std::cout << "Search for: ";
	std::getline(std::cin, user_word);

	std::ifstream in_file;
	std::string line;
	open_file(in_file);

	return 0;
}

void open_file(std::ifstream &in_file) {

	in_file.open("romeojuliet.txt");

}
