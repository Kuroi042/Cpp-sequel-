#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <stdio.h>

class AForm;
class RBGradeTooHighException : public std::exception
{
public:
    const char *what() const throw();
 
};
class RBGradeTooLowException : public std::exception
{

public:
    const char *what() const throw();
};

class RBGradeTooLow2execException : public std::exception
{

public:
    const char *what() const throw();
};


class RobotomyRequestForm :public AForm{
private : 
std::string target;
public :
RobotomyRequestForm(std::string target);
void execute(const Bureaucrat &execute) const;
~RobotomyRequestForm();
};