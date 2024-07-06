#include "Base.hpp"
#include <cstdlib>
#include <time.h>
#include <iostream>

class A: public Base
    {
    };
class B: public Base
    {
    };
class C: public Base
    {
    };

Base *generate(void)
{

    srand((unsigned int)(time(0)));

 
    int randomNumber = (rand() % 3) + 1;

    std::cout << "Random number: " << randomNumber << std::endl;
    switch (randomNumber)
    {
    case 1:
    std::cout<<"return A\n";
        return new A(); 
        break;
    case 2:
        std::cout<<"return B\n";

        return new A(); 
        break;
    case 3:
        std::cout<<"return C\n";

        return new A(); 
    
        break;
    }
   return NULL;
}
void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::bad_cast&) {}

    std::cout << "Unknown type" << std::endl;
}

int main()
    {
        Base *prt  = generate();
             identify(prt);
        
    }
