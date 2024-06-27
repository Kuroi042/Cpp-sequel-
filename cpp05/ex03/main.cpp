#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>


int main(){ 
        try
        {
                Intern inter;
                AForm *f1 ;
                 f1 = inter.makeForm("RobotomyRequest", "f1");
                
                          std::cout << *f1 << std::endl;
             delete f1;
 
                std::cout<<"end f1\n";
                AForm *f2 = inter.makeForm("PresidentialPardon", "f2");
                std::cout << *f2 << std::endl;
                  delete f2;
                                std::cout<<"end f2\n";

                AForm *f3 = inter.makeForm("ShrubberyCreation", "f3");
                std::cout << *f3 << std::endl;
                 delete f3;
                                std::cout<<"end f3\n";

                AForm *f4 = inter.makeForm("incorrect form", "f4");
                std::cout << *f4 << std::endl;
                                std::cout<<"end f4\n";
        }
        catch (std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }
        return (0);
}

