#pragma once

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
class Form
{
private:
    const string _name;
    bool isSigned;
    int grade2sign;
    int grade2exec;

public:
    Form();
    Form(std::string name, int grade2sign, int grade2exec);
    ~Form();
    const string getName();
    bool getIsSigned();
    int getGradesigned();
    int getGrade2sign();
     void beSigned( Bureaucrat& br);
};

