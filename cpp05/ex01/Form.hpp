#pragma once

#include <iostream>
#include <exception>
 #include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
    const std::string _name;
    bool isSigned;
    const int grade2sign;
    const int grade2exec;

public:
    Form();
    Form(std::string name, const  int grade2sign, const  int grade2exec);
    Form(const Form &other);
    Form& operator=(const Form &original);

    ~Form();
    const std::string getName();
    bool getIsSigned();
     int getGrade2sign();
     int getGrade2exec();
   bool beSigned( Bureaucrat& br);

     class FormGradeTooHighException : public std::exception
{
public:
    const char *what() const throw();
};

class FormGradeTooLowException : public std::exception
{
public:
    const char *what() const throw();
};

};

std::ostream& operator<<(std::ostream& os,  Form &fr);

