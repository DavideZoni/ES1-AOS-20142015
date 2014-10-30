#ifndef __DOWORDCOUNT__
#define __DOWORDCOUNT__

#include "functions.hh"

void doCountVowel()
{ 
    std::cout << "doCountVowel" << std::endl;
    std::string sentence;
    int vowelsNum = 0;
    std::cout << "Sentence: ";
    
    std::getline(std::cin, sentence);
    assert(sentence > 0);
	 
    for(int i=0;i<=sentence.length();i++)
    {        
    sentence[i] = tolower(sentence[i]);
    if(sentence[i] =='a'||
       sentence[i] =='e'||
       sentence[i] =='i'||
       sentence[i] =='o'||
       sentence[i] == 'u')
            vowelsNum++;
    }
    
    std::cout << vowelsNum;  
}

#endif
