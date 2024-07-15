#pragma once
#include <iostream>
template <typename T , typename Z>

void iter(T *arr , size_t lenght,void (*f)(Z&) )
{   
    size_t i = 0;
        while(i <lenght)
            {
                f(arr[i]);
                    i++;
            }
}
template <typename T , typename Z>
void iter(T *arr , size_t lenght,void (*f)(const Z&) )
{   
    size_t i = 0;
        while(i <lenght)
            {
                f(arr[i]);
                    i++;
            }
}



template <typename T>
void funct(const T& x)
    {
std::cout<< x<<"miaw "<<std::endl;
    }



template <typename T>
void funct(T& x)
    {
std::cout<< x<<"miaw "<<std::endl;
    }

