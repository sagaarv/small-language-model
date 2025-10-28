#include "generatetext.h"
#include <iostream>
#include <random>

generatetext::generatetext(const languagemodel& m) : model(m) {}		//Initialize the modelreference

//Function that generates a string of given length based on my model and k-grams
std::string generatetext::generater(int leng){
	std::string output = " ";
//step 1: choose a starting k-gram 

}



