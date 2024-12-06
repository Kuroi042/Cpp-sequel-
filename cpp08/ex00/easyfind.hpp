#pragma once
#include <iostream>
#include <algorithm>
#include <vector>


class to_find_not_found : public ::std::exception
{

public:
    const char *what() const throw()
    {
        return "element not found";
    };
};

template <typename T>
void easyfind(T& contoner, unsigned int to_find)
{
    // size_t i = 0;
    if (contoner.size() > 1)
    {

        std::vector<int>::iterator iter =  contoner.begin();
            for(iter =  contoner.begin();   iter < contoner.end(); iter++)
                {
                    if(*iter ==  static_cast<int>(to_find)){
                        std::cout<<*iter<<" found \n";
                            break;
                     } 
                }
        if(iter == contoner.end())
            std::cout <<"number is not found\n";
    } 
        else
    std::cout<<"the container is empty\n";
}

 
