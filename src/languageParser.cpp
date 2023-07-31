#include <iostream>
#include "globals.h"
#include <sstream>

std::vector<std::string> sepWordsVector; //stores separated words in a vector

void WordSeparator(std::string action)
{
    std::stringstream inputString(action);
    std::stringstream choppedString;
    std::string word;
    std::string temp;
     
    int i;

    while(inputString >> word){
        if(word == "and"){
            sepWordsVector.push_back(temp);
            choppedString.str("");
            temp = "";
        }
        else if(inputString.eof() == true){
            temp = word;
            sepWordsVector.push_back(temp);
        }
        else{
            choppedString << word;
            temp = choppedString.str();   
            choppedString << " ";
            
        }
    }

    /*for(i = 0; i < sepWordsVector.size(); i++)
    {
        
    }*/ 
    
}