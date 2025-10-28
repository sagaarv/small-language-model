
#include "languagemodel.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

languagemodel::languagemodel(int k_val){
	k= k_val;
}
//this function is a part of training the model by extracting the frequency of each k-gram, constricted by the length k.
void languagemodel::frequency_kgram(const std::string &input){

	for(int i = 0; i + k < input.size(); i++){
		std::string kgram = "";
		for(int j = 0; j < k; k++){
			kgram = kgram + input[i + j];
		}
		char next = input[i + k];
		kgram_amount[kgram]++;			//n(w)
		kgram_follow[kgram][next]++;		//n(w,c)
	}
}
//function that calculates the conditional probability P(c|w)
double languagemodel::conditional_prob (const char next, std::string &kgram) const{
	double count_kgram_amount = kgram_amount.at(kgram);		//.at to access the amount of words
	double count_kgram_follow = kgram_follow.at(kgram).at(next);
	double prob = count_kgram_follow/count_kgram_amount;
	return prob;
}
//function that chooses a random starting gram
std::string languagemodel::get_kgram() const{
	std::vector<std::string> kgrams(kgram_amount.size());
	//put all kgrams in a vector
	int tmp = 0;
	int i = 0;
	for(auto it_ = kgram_amount.begin(); it_ != kgram_amount.end(); it_++){
		kgrams[i] = it_ -> first;				//takes the k-gram and put it into kgrams[i]
		it_++;
		i++;
		tmp++;
	}
	//choose random index
	std::srand(std::time(nullptr));
	int index = std::rand() % tmp+1;
	return kgrams[index];

}

//funtion that picks the next character c
char languagemodel::character_c(const std::string &kgram) const{


}
