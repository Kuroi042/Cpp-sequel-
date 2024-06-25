#include "Bureaucrat.hpp"

int main()
    {
try{
Bureaucrat br("charaf",150);
    br.BrDecrement();
std::cout<<br<<std::endl;
}
catch(const std::exception &e)
    {
        std::cerr << "exeception occured check the value of Bureaucrate's grade\n";
    }
    }
