#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
 #include "Bureaucrat.hpp"
class Bureaucrat;




class AForm
{
private:
    const std::string _name;
    bool isSigned;
    int const grade2sign;
    int const grade2exec;
public:
    AForm();
    AForm(std::string const name, int grade2sign, int grade2exec);
     virtual ~AForm();
    AForm(const AForm &other);
    AForm& operator=(const AForm &original);

    std::string const getName() const ;
    bool getIsSigned() const ;
    int getGrade2sign() const;
    int getGrade2exec() const;
    bool beSigned(  Bureaucrat const &br);
    virtual void execute(Bureaucrat const &executor) const = 0;

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
std::ostream& operator<<(std::ostream &os,  AForm &form);


#endif
