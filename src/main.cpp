#include "languagemodel.h"
#include "generatetext.h"
#include <iostream>
#include <fstream>
#include <sstream>

std::string readfile(const std::string& filename){
	std::ifstream file(filename);

	std::stringstream buffer;
	buffer << file.rdbuf();
	return buffer.str();
}

int main(int argc, char* argv[]){

	if(argc<4){
		std::cout << "Usage wrong: slm <k> <filename> <length>" << std::endl;
		return 1;
	}
	int k = std::atoi(argv[1]);
	std::string filename = argv[2];
	int length = std::atoi(argv[3]);

	std::string text = readfile(filename);
	//std::ifstream file(filename);
	//std::string text;
	//std::string line;
	//while(std::getline(file, text)){
	//	text = text + line + "\n";
	//}

	languagemodel model(k);
	model.frequency_kgram(text);
	generatetext gen(model);

	std::cout << gen.generater(length) << std::endl;
}
