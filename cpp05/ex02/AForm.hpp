#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
using namespace std;
#include "Bureaucrat.hpp"
class GradeTooHighException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Grade is too high! Must respect the range of the form.";
    }
};
class GradeTooLowException : public std::exception
{

public:
    const char *what() const throw()
    {
        return "Grade is too low! Must respect the range of the form";
    }
};



class Bureaucrat;
class AForm
{
private:
    const string _name;
     bool isSigned;
    int grade2sign;
    int grade2exec;

public:
    AForm();
    AForm(std::string name, int grade2sign, int grade2exec);
     ~AForm();
    const string getName();
    bool getIsSigned() const;
    int getGrade2sign()const ;
    int getGrade2exec() const;
     void beSigned( Bureaucrat& br);
    virtual void execute(Bureaucrat const &executor) const = 0 ;
    };

#endif
