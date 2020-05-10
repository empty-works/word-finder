#include <iostream>
#include <fstream>
#include <string>

void search_lines(std::ifstream &in_file, const std::string &user_word);

int main() {
	
	std::string user_word {};
	int total_num_words {0};
	int matching_words {0};
	
	std::cout << "Search for: ";
	std::getline(std::cin, user_word);

	std::ifstream in_file;
	std::string line;
	in_file.open("romeojuliet.txt");
	if(!in_file) {
	
		std::cerr << "Error opening file." << std::endl;
		return 1;
	}

	search_lines(in_file, user_word);	

	in_file.close();

	return 0;
}

void search_lines(std::ifstream &in_file, const std::string &user_word) {

	std::string line {};
	while(std::getline(in_file, line)) {
	

	}	
}
