#pragma once
#include <iostream>
class Base
    {
        public:
        virtual ~Base(){};
        void baseprint(Base *a)
            {
                std::cout<<"heres the instance of a ";
            }

    };