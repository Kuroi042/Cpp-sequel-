#include <iostream>
#include <string>
#include <stdio.h>

class Base
{
public:
        virtual ~Base(){};
};

class derived : public Base
{
};
class derived2 : public Base
{
};
Base *generate(void)
{
        return new derived();
}
Base *generate2(void)
{
        return new derived2();
}

void identify(Base *ptr)

{
        if (dynamic_cast<derived *>(ptr))
        {
                std::cout << "its class derived\n";
        }
        else if (dynamic_cast<derived2 *>(ptr))
                std::cout << "its class derived222\n";
}
int main()
{
        Base *ptr = generate();
        Base *ptr2 = generate2();
        identify(ptr);
        identify(ptr2);
        delete ptr;
        delete ptr2;
        while(1){}
}
