#ifndef __DOCOUNTSUBSTRINGS__
#define __DOCOUNTSUBSTRINGS__

#include "functions.hh"
int
doCountSubstrings(){
	std::cout<<"\n\n ************ doCountStringOccurrencies ['q' to exit]"<<std::endl;
	std::string str;
	std::string substr;
	int count=0;

	std::cout<<"substring=";
	std::getline(std::cin,substr);
	assert(substr.size()>0&&substr.size()<10);

	std::getline(std::cin,str);
	while(str!="q")
	{
		count=0;
		if(str.size()<substr.size())
			assert("substring is longer than string\n");
		for(unsigned int i=0;i<(str.size()-substr.size()+1);i++)
		{
			unsigned int pos=str.find(substr,i);
			if(pos!=std::string::npos)
			{
				count++;
				i=pos+substr.size()-1;
			}
		}
		std::cout<<str<<" Substr Count:"<<count<<std::endl;
		std::getline(std::cin,str);
	}
	return count;
}



#endif
