#ifndef SHRUBBERYCREATION
#define SHRUBBERYCREATION
#include <iostream>
#include <fstream>
#include "AForm.hpp"
class AForm;
class SHGradeTooHighException : public std::exception
{
public:
    const char *what() const throw();
 
};
class SHGradeTooLow2execException : public std::exception
{
public:
    const char *what() const throw();
 
};

class SHGradeTooLowException : public std::exception
{

public:
    const char *what() const throw();
};
class ShrubberyCreationForm : public AForm {
private :
std::string const  target;
public :
    ShrubberyCreationForm(const std::string &target);
    void execute( Bureaucrat const &executor)  const;
    ~ShrubberyCreationForm();
};

#endif
