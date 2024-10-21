#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

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
    size_t i = 0;
    if (contoner.size() > 1)
    {

        vector<int>::iterator iter =  contoner.begin();
            for(iter =  contoner.begin();   iter<contoner.end(); iter++)
                {
                    if(*iter ==  to_find){
                        cout<<*iter<<" miaw found \n";
                            break;
                     } 
                }
        if(iter == contoner.end())
            cout <<"number is not found\n";
        
        // iter1 = std::find(contoner.begin(), contoner.end(), to_find);
        //     if(iter1!= contoner.end() )
        //         {
        //         cout<<to_find<<std::endl;
        //             cout<<"the number is found\n";
                
        //         }

    } 
        else
    cout<<"the container is empty\n";
}

 
