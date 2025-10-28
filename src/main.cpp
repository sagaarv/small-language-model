#include "languagemodel.h"
#include "generatetext.h"
#include <iostream>
#include <fstream>



int main(int argc, char* argv[]){

	if(argc<4){
		std::cout << "Usage wrong" << std::endl;
		return 1;
	}
	int k = std::stoi(argv[1]);
	std::string filename = argv[2];
	int length = std::stoi(argv[3]);

	std::ifstream file(filename);
	std::string text;
	std::string line;
	while(std::getline(file, text)){
		text = text + line + "\n";
	}



	//std::cout << output << std::endl;
}
