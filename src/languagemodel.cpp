
#include "languagemodel.h"
#include <iostream>
#include <string>

languagemodel::languagemodel(int k){
}
//this function is a part of training the model by extracting the frequency of each k-gram, constricted by the length k.
void languagemodel::frequency_kgram(const std::string &input){

	for(int i = 0; i + k < input.size(); i++){
		std::string kgram = "";
		for(int j = 0; j < k; k++){
			kgram = kgram + input[i + j];
		}
		char next = input[i + k];
		kgram_amount[kgram]++;
	}
}





