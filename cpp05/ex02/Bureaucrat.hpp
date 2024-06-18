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
    Bureaucrat(const std::string _name, int _grade);
    ~Bureaucrat();
    int getGrade() const ;
    const string getName() const;
    void signForm(AForm&  fr) ;
   void executeForm(AForm const &fr)  {
    try {
        fr.execute(*this);
        std::cout << name << " executed " << fr.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << name << " couldn't execute " << fr.getName() << " because " << e.what() << std::endl;
    }
};

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

