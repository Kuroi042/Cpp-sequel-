#ifndef SHRUBBERYCREATION
#define SHRUBBERYCREATION
#include <iostream>
#include <fstream>
#include "AForm.hpp"
// #include "Bureaucrat.hpp"
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
std::string const  target;
public :
    ShrubberyCreationForm(const std::string &target);
    void execute( Bureaucrat const &executor)  const;
    ~ShrubberyCreationForm(){};
};

#endif
