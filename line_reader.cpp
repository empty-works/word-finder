#include "line_reader.h"
#include <iostream>

void LineReader::ReadLines(std::ifstream &in_file) {
	std::string line;
	while(std::getline(in_file, line)) {
		std::vector<std::string> word_vec = ParseLine(line);
		total_num_words_ += word_vec.size();
	}
	std::cout << "Total number of words: " << total_num_words_ << std::endl;
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
