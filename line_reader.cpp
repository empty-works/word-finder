#include "line_reader.h"

void LineReader::ReadLines(std::ifstream &in_file) {
	std::string line;
	while(std::getline(in_file, line)) {
		std::vector<std::string> word_vec = ParseLine(line);	
	}
}

std::vector<std::string> LineReader::ParseLine(const std::string &line) {
	
}
