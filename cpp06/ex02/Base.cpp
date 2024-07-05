#include "Base.hpp"
#include <cstdlib>
#include <time.h>
#include <iostream>

Base *generate(void)
{

    srand((unsigned int)(time(0)));

    Base *A =  new Base;
    Base *C=  new Base;
    Base *B=  new B;
    int randomNumber = (rand() % 3) + 1;

    std::cout << "Random number: " << randomNumber << std::endl;
    switch (randomNumber)
    {
    case 1:
    std::cout<<"return A\n";
        return A;
        break;
    case 2:
        std::cout<<"return B\n";

        return B;
        break;
    case 3:
        std::cout<<"return C\n";

        return C;
    
        break;
    }
        return A;
}
int main()
    {
       
        generate();

        

    }