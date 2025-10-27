//Header file for my language model

#include <iostream>
#include <string>
#include <map>
class languagemodel {
	private:
	int k;

	std::map <std::string, int> kgram_amount;

	public:

	languagemodel(int k);

	void frequency_kgram(const std::string &input);


};
