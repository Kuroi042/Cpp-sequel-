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
                return "error  hight grade  ";
            }
    };
class PrBGradeTooLowException: public std::exception
    {
        public:
        const char *what() const throw()
            {
                return "error low grade ";
            }
    };

class PresidentialPardonForm : public AForm
    {   
        private :
        std::string target;
        public:
        PresidentialPardonForm(){
            std::cout<<"constractor for PresidentialPardonForm \n";
        }
        PresidentialPardonForm(std::string _target);
        ~PresidentialPardonForm(){
            std::cout<<"destractor for PresidentialPardonForm\n";
        };
        void execute (const Bureaucrat &br)const;
    };