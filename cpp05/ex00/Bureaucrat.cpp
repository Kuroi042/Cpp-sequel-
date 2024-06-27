#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("none"), grade(150)
{
}
 const char*  Bureaucrat::gradeTooHighException::what()  const throw() 
        {
                               return "Grade is too high! Must be between 1 and 150.";
 
        }
         const char*  Bureaucrat::gradeTooLowException::what()  const throw() 
        {
                return "Grade is too low! Must be between 1 and 150.";
 
        }


Bureaucrat::~Bureaucrat()
{
}
 Bureaucrat &Bureaucrat::operator=(  const Bureaucrat &original)
{       
        if(this!= &original)
                {
                        grade =  original.grade;
                }
        return *this;
     
}

Bureaucrat::Bureaucrat(const Bureaucrat &original) : name(original.name), grade(original.grade) 
{}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
        grade = _grade;
        if (grade < 1)
                throw gradeTooHighException();
        if (grade > 150)
                throw gradeTooLowException();
}

int Bureaucrat::getGrade()
{
        return grade;
}

const std::string Bureaucrat::getName()
{
        return name;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &br)

{
        os << br.getName() << " Bureaucrate Grade " << br.getGrade();
        return (os);
}

void Bureaucrat::decrement()
{
        grade++;
        if (getGrade() > 150)
                throw gradeTooLowException();
}
void Bureaucrat::increment()
{
        grade--;
        if (getGrade() < 1)
                throw gradeTooHighException();
}