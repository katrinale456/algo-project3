#ifndef WORDFINDER
#define WORDFINDER

#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

class WordFinder {
	private:
		int numWords;
		vector<string> words;
	public:
		WordFinder();
		void readWords();
		void sortWords();
		int lookupWords(string target);
		friend ostream& operator<< (ostream& ostr, const WordFinder &x);
};

//#include "WordFinder.cpp"
#endif
