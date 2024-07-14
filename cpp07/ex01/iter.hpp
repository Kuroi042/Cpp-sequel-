#pragma once
#include <iostream>
template <typename T , typename Z>

void iter(T *arr , T lenght,void (*f)(Z&) )
{   
    T i = 0;
        while(i <lenght)
            {
                f(arr[i]);
                    i++;
            }
}

template <typename T>
void funct(T& x)
    {
std::cout<< x<<"miaw "<<std::endl;
    }

