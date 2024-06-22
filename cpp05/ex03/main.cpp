#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{

try{
    Intern obj;
    AForm* rrf = obj.makeForm("PresidentialPardon","zab");; 
    
    std::cout<<*rrf<<std::endl;
    delete rrf;
}   
catch (std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }


}