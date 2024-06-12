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
        return "Grade is too high! Must be between 1 and 150.";
    }
};
class GradeTooLowException : public std::exception
{

public:
    const char *what() const throw()
    {
        return "Grade is too low! Must be between 1 and 150.";
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
    bool getIsSigned();
    int getGrade2sign();
    int getGrade2exec();
     void beSigned( Bureaucrat& br);
    virtual void execute(Bureaucrat const &executor) const = 0;
    };

#endif
