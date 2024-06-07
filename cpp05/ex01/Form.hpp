#ifndef FORM_HPP
#define FORM_HPP

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
    int grade_To_Sign;
    int grade_2exec;

public:
    Form();
    Form(std::string name, int grade);
    ~Form();
    const string getName();
    bool getIsSigned();
    int getGradesigned();
     void beSigned(const Bureaucrat& br);
};

#endif
