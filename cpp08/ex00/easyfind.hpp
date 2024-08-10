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
void easyfind(std::vector<T> &hh, int to_find)
{
    size_t i = 0;
    if (hh.size() > 1)
    {

        typename std::vector<T>::iterator iter1;
        iter1 = std::find(hh.begin(), hh.end(), to_find);
        // typename std::vector<T>::iterator iter2;
        // iter2 = std::find(iter1 + 1, hh.end(), to_find);
            if(iter1!= hh.end() )
                {
                cout<<to_find<<std::endl;
                    cout<<"the number is found\n";
                
                }
            else
            cout <<"number is not found\n";
    } 
        else
    cout<<"the container is empty\n";
}

 
