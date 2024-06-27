#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>


class Intern{

public:
Intern();
~Intern();
AForm *makeForm(const std::string &NameForm , std::string Target);
AForm *FormRobotomyRequest(std::string target);
AForm *FormShrubberyCreation(std::string target);
AForm *FormPresidentialPardon(std::string target);
 class   ErrorFormInputException: public std::exception
    {
        public :
        const char *what()const throw();
    };



};


