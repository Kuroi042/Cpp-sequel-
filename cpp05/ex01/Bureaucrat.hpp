#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
 #include <exception>
#include "Form.hpp"
class Form;
 


class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(const Bureaucrat &original);
    Bureaucrat& operator=(const Bureaucrat &original);
    Bureaucrat();
    Bureaucrat(const std::string _name, const int _grade);
    ~Bureaucrat();
    int getGrade();
    const std::string getName();
    void signForm(Form& fr);
    void increment();
    void decrement();
    class gradeTooHighException : public std::exception
{
    public :
        const char* what()  const throw();
};

class gradeTooLowException : public std::exception
{
        public :

        const char* what() const throw();
};


};
std::ostream& operator<<(std::ostream& os,  Bureaucrat &br);

#endif
