#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>


int main(){ 
        try
        {
                Intern i1;
                AForm *f1 = i1.makeForm("ShrubberyCreation", "f1");
                std::cout << *f1 << std::endl;
                delete f1;
                std::cout<<"end f1\n";
                AForm *f2 = i1.makeForm("PresidentialPardon", "f2");
                std::cout << *f2 << std::endl;
                delete f2;
                                std::cout<<"end f2\n";

                AForm *f3 = i1.makeForm("RobotomyRequest", "f3");
                std::cout << *f3 << std::endl;
                delete f3;
                                std::cout<<"end f3\n";

                AForm *f4 = i1.makeForm("zabw9lwa", "f4");
                std::cout << *f4 << std::endl;
                                std::cout<<"end f4\n";

        }
        catch (std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }
        return (0);
}