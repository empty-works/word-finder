#include "line_reader.h"
#include <iostream>

void LineReader::ShowResults(std::ifstream &in_file, std::string user_word) {
		
}

void LineReader::ReadLines(std::ifstream &in_file, std::string user_word) {
	std::string line;
	while(std::getline(in_file, line)) {
		std::vector<std::string> words_vec = ParseLine(line);
		total_num_words_ += words_vec.size();
	 	FindWord(words_vec, user_word);
	}

}

std::vector<std::string> LineReader::ParseLine(const std::string &line) {
	std::vector<std::string> words_vec{};
	std::size_t current, previous = 0;
	char delimiter{' '};
	current = line.find(delimiter);
	while(current != std::string::npos) {
		words_vec.push_back(line.substr(previous, current - previous));
		previous = current + 1;
		current = line.find(delimiter, previous);	
	}
	words_vec.push_back(line.substr(previous, current - previous));
	return words_vec;	
}

void LineReader::FindWord(std::vector<std::string> words_vec, std::string user_word) {
			
}
