#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"


int main()
    {
        Base *ptr  = generate();
             identify(ptr);
             identify(*ptr);
             delete ptr;
            
    }
