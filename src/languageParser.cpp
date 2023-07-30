#include <iostream>
#include "globals.h"
#include <sstream>

std::vector<std::string> sepWordsVector; //stores separated words in a vector

void WordSeparator(std::string action)
{
    std::stringstream ss(action);
    std::string word;
     
    int i;
    while(ss >> word){
        sepWordsVector.push_back(word);  
    }

    
    
}