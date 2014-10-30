#ifndef __DOWORDCOUNT__
#define __DOWORDCOUNT__

#include "functions.hh"

int doWordCount( )
{
	std::cout<<"\n\n ************ doCountWord ['q' to exit]"<<std::endl;
	std::string str;
	int count=0;

	std::cout<<"Stringa=";
	
  std::getline(std::cin,str);
	while(str!="q")
	{
		if(str.size()>0){
		count=1;
		
		for(unsigned int i=0;i<(str.size());i++)
		{
			if(' '==str.at(i))
			{
				count++;
			}
		}
		  std::cout<<str<<" Words Count:"<<count<<std::endl;
	   }
       std::getline(std::cin,str);
	}
	return count;

}

#endif
