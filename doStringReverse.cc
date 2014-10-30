#ifndef __DOSTRINGREVERSE__
#define __DOSTRINGREVERSE__


#include <algorithm>
#include "functions.hh"

void doStringReverse()
{
	std::cout << "String reverse function " << std::endl;

	std::string Stringa = "";
	std::string reversedString = "";

	std::cout<<"String To Reverse=";
	std::getline(std::cin,Stringa);
	//assert(substr.size()>0&&substr.size()<10);

	for (int i = Stringa.size()-1; i >= 0; i--){
	    reversedString += Stringa[i];
	}

	std::cout << "Stringa: " << Stringa << " Stringa Rovesciata: " << reversedString << std::endl;
}


#endif
