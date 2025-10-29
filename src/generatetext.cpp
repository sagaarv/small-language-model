#include "generatetext.h"
#include <iostream>
#include <string>

generatetext::generatetext(const languagemodel& m) : model(m) {}		//Initialize the modelreference

//Function that generates a string of given length based on my model and k-grams
std::string generatetext::generater(int leng){
	std::string kgram = model.get_kgram();
	std::string output = kgram;
	int k = model.k;

	for(int i = 0 ;i < leng - k; i++){
		char next_char = model.character_c(kgram);
		output.push_back(next_char); 			//push_back adds the element to the end
		kgram.erase(0,1);				//remove the first character
		kgram.push_back(next_char);			//add the sampled character (c) to the end
	}

	return output.substr(0,leng);				//return the fixed amount of characters (leng)

}



