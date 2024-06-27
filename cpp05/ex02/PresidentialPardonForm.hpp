#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
         class PrBGradeTooHighException: public std::exception
    {
        public:
        const char *what() const throw();
    };
class PrBGradeTooLowException: public std::exception
    {
        public:
        const char *what() const throw();
 
    };
    
class PresidentialPardonForm : public AForm
    {   






        private :
        std::string target;
        public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string _target);
        ~PresidentialPardonForm() ;
        void execute (const Bureaucrat &br)const;
    };