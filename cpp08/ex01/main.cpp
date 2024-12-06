#include "Span.hpp"

int main()
{
         Span sp(5); 

    //  int size  =  200;
    //     Span sp(size)    ;
    //  for (int i = 1; i <= size; ++i)
    // {
    //     sp.addNumber(i);
    // }

        sp.addNumber(100);
        sp.addNumber(-200);
        sp.addNumber(3);
        sp.addNumber(4);
        sp.addNumber(5);

    std::cout << "size " << sp.getVect().size() << std::endl;
    std::cout<<"shortSpan  =  " <<sp.shortestSpan()<<std::endl;
    std::cout<<" longest span  =  "<<sp.longestSpan()<<std::endl;

 
}
