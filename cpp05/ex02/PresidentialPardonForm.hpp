#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <stdio.h>
class Aform;
class PrBGradeTooHighException: public std::exception
    {
        public:
        const char *what() const throw()
            {
                return "error  hight ";
            }
    };
class PrBGradeTooLowException: public std::exception
    {
        public:
        const char *what() const throw()
            {
                return "low";
            }
    };

class PresidentialPardonForm : public AForm
    {   
        private :
        std::string target;
        public:
        PresidentialPardonForm(std::string _target);
        ~PresidentialPardonForm(){};
        void execute (const Bureaucrat &br)const;
    };