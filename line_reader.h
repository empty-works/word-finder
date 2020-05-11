#ifndef LINE_READER_H_
#define LINE_READER_H_

#include <vector>
#include <string>
#include <fstream>

class LineReader {
	private:
		int total_num_words_{0};
		int num_matches_{0};
	public:
		LineReader(){}
		void ReadLines(std::ifstream &in_file);
		std::vector<std::string> ParseLine(const std::string &line);
		void FindWord(std::vector<std::string> words_vec);
		void DisplayResults();
		~LineReader(){}	
};

#endif
