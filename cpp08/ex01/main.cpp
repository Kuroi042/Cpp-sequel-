#include "Span.hpp"

int main()
    {   
    
         Span sp(5);
         cout<<"size "<<sp.getSize()<<std::endl;
         sp.addNumber(1);
         sp.addNumber(2);
                 sp.addNumber(10);
                         sp.addNumber(20);
                         sp.addNumber(30);
        
            //for(size_t i = 0; i<sp.getVect().size(); i++)
            //     {
            //         cout<<sp.getVect()[i]<<std::endl;
            //     }
        sp.longestSpan();
         sp.shortSpan();
        //    sp.longestSpan();

    }

 