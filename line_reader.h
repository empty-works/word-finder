#ifndef LINE_READER_H_
#define LINE_READER_H_

#include <vector>
#include <string>
#include <fstream>

class LineReader {
	private:
		int total_num_words_{0};
		int num_matches_{0};
		void ReadLines(std::ifstream &in_file, std::string user_word);
		std::vector<std::string> ParseLine(const std::string &line);
		void FindWord(std::vector<std::string> words_vec, std::string user_word);
	public:
		LineReader(){}
		void ShowResults(std::ifstream &in_file, std::string user_word);
		~LineReader() = default;	
};

#endif
