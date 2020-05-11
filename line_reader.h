#ifndef LINE_READER_H_
#define LINE_READER_H_

#include <vector>
#include <string>
#include <fstream>

class LineReader {
	private:
		int total_num_words_{0};
		int num_matches_{0};
		std::vector<std::string> words_vec_{};
	public:
		LineReader(){}
		void ReadLines(std::ifstream in_file);
		void FindWord(std::string line);
		void DisplayResults();
		~LineReader(){}	
};

#endif
