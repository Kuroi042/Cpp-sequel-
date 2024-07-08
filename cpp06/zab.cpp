#include <iostream>
#include <string>
#include <stdio.h>
class Base
{
public:
    virtual ~Base() {};
};
class A : public Base
{
};
class B : public Base 
{
};

Base* generate()
{
        
    return new A();

}
Base* generate2()
{
        
    return new B();

}

void identify(Base *ptr)
    {
        if(dynamic_cast<A*> (ptr))
            std::cout<<"is A\n";
            else if(dynamic_cast<B*> (ptr))
            std::cout<<"is b\n";

    }

struct Data
    {

    };

class serializer
{
    public :
   static  uintptr_t serialize(Data* ptr)
        {
       
                return reinterpret_cast<uintptr_t>(ptr);    
                   
        }
        static Data* deserialize(uintptr_t raw)
            {
             
                return reinterpret_cast<Data*>(raw);

            }
};

int main()
    {
    //     Base *ptr;
    //     Base *ptr2;
    //     ptr2 =  generate2();
    //    ptr =  generate();

    //     identify( ptr);
    //             identify( ptr2);
    Data *ptr;
      uintptr_t i =  serializer::serialize(ptr);
        std::cout<<"i ==" <<i<<std::endl;
        std::cout<< "i == "<<serializer::deserialize(i)<<std::endl;
   
    }


