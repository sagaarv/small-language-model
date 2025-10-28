//Headerfile for my text generator
#include "languagemodel.h"
#include <iostream>
#include <string>


class generatetext {

	private:

	const languagemodel& model;

	public:

	generatetext(const languagemodel& model);

	std::string generater(int leng);			//Generate string with given length




};
