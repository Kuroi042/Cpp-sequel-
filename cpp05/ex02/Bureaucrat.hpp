#pragma once
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
     std::string  const name;
     int grade;

public:
    Bureaucrat(const Bureaucrat &original);
    Bureaucrat& operator=(const Bureaucrat &original);
    Bureaucrat();
    Bureaucrat( std::string const _name,  int _grade);
    ~Bureaucrat();
    int getGrade() const ;
    string const getName() const;
    void signForm(AForm&  fr) ;
   void executeForm(AForm const &fr);

    class gradeTooHighException : public std::exception
{
    public :
        const char* what()  const throw();
};

class gradeTooLowException : public std::exception
{
        public :
        const char* what() const throw();
};
};

