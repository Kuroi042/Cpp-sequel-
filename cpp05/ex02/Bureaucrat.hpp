#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
using namespace std;
#include <exception>
#include "AForm.hpp"
class AForm;
class gradeTooHighException : public std::exception
{
    public :
        const char* what()  const throw() 
        {
                return "Grade is too high! Must respect the range of the form";
        }
};

class gradeTooLowException : public std::exception
{
        public :

        const char* what() const throw()
        {
                return "Grade is too low! Must respect the range of the form !! ";
        }
};

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:

    Bureaucrat();
    Bureaucrat(const std::string _name, int _grade);
    ~Bureaucrat();
    int getGrade() const ;
    const string getName() const;
    void signForm(AForm& fr);
};

#endif
