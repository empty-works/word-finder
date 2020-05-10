#include <iostream>
#include <fstream>
#include <string>

int main() {
	
	std::string user_word {};
	
	std::cout << "Search for: ";
	std::getline(std::cin, user_word);

	std::cout << "What you chose: " << user_word << std::endl;

	return 0;
}
