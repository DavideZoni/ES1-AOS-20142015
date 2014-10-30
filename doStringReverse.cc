#ifndef __DOSTRINGREVERSE__
#define __DOSTRINGREVERSE__


#include <algorithm>
#include "functions.hh"

void doStringReverse()
{
    std::cout<<"\n\n ************ doStringReverse ['q' to exit]"<<std::endl;
    std::string str;
    int lenght = 0;
    
    std::cout<<"string=";
    std::getline(std::cin,str);
    assert(str.size()>0);
    while(lenght<= str.size() && str!="q"){
        std::cout<<str[str.size() - lenght];
        lenght++;
    }
    std::cout<<"\n";
}


#endif
