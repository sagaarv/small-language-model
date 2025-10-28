//Header file for my language model

#include <iostream>
#include <string>
#include <map>
class languagemodel {
        private:
        int k;

        std::map <std::string, int> kgram_amount;				//to store my k-grams
        std::map <std::string, std::map<char, int>> kgram_follow;		//Lets me look at any k_gram and what follows it
        public:

        languagemodel(int k);

        //function that gets the frequency of each k-gram
        void frequency_kgram(const std::string &input);

        //function that get the conditional probability of the word c after the word w, P(c | w)
        double conditional_prob(const char next, std::string &kgram);


};
