#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <stdio.h>

class AForm;
class RBGradeTooHighException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "aiee robotomy failed !!! Grade is too high! Must respect the range of the RobotomynForm ";
    }
};
class RBGradeTooLowException : public std::exception
{

public:
    const char *what() const throw()
    {
        return " aiee robotomy failed  !!! Grade is too low! Must respect the range of the RobotomynForm";
    }
};

class RobotomyRequestForm :public AForm{
private : 
std::string target;
public :
RobotomyRequestForm(std::string target);
void execute(const Bureaucrat &execute) const  ;
~RobotomyRequestForm()
{

};
};