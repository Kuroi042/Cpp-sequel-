#ifndef SHRUBBERYCREATION
#define SHRUBBERYCREATION
#include <iostream>
#include <fstream>
#include "AForm.hpp"
class AForm;
class SHGradeTooHighException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Grade is too high! Must respect the range of the ShrubberyCreationForm ";
    }
};
class SHGradeTooLowException : public std::exception
{

public:
    const char *what() const throw()
    {
        return "Grade is too low! Must respect the range of the ShrubberyCreationForm";
    }
};
class ShrubberyCreationForm : public AForm {
private :
std::string target;
public :
    ShrubberyCreationForm(const std::string &target);
    void execute(const Bureaucrat &executor) const;
    virtual ~ShrubberyCreationForm(){};
};

#endif
