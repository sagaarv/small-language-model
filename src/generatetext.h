//Headerfile for my text generator
#include "languagemodel.h"
#include <iostream>
#include <string>
#pragma once

class generatetext {

	private:
	const languagemodel& model;				//Accessing the k-grams from the languagemodel by reference

	public:
	generatetext(const languagemodel& model);

	std::string generater(int leng);			//Generate string with given length




};
