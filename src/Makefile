

all: slm

slm: languagemodel.o generatetext.o main.o
	g++ languagemodel.o generatetext.o main.o -o slm

languagemodel.o: languagemodel.cpp languagemodel.h
	g++ -c languagemodel.cpp

generatetext.o: generatetext.cpp generatetext.h
	g++ -c generatetext.cpp

main.o: main.cpp
	g++ -c main.cpp


clean:
	rm -f slm languagemodel.o generatetext.o main.o
