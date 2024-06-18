#pragma once
#include <iostream>
using namespace std;
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
     std::string  const name;
    int grade;

public:

    Bureaucrat();
    Bureaucrat( std::string const _name, int _grade);
    ~Bureaucrat();
    int getGrade() const ;
    string const getName() const;
    void signForm(AForm&  fr) ;
   void executeForm(AForm const &fr);

class gradeTooHighException : public std::exception
{
    public :
        const char* what()  const throw() 
        {
                return "Grade is too high! Must respect the range of the form";
        }
};

class gradeTooLowException : public std::exception
{
        public :

        const char* what() const throw()
        {
                return "Grade is too low! Must respect the range of the form !! ";
        }
};
};

