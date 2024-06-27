#include "Bureaucrat.hpp"



  const char* Bureaucrat::gradeTooHighException::what() const throw() {
    return "Bureaucrat Grade is too high! Must be between 1 and 150.";
}
const char* Bureaucrat::gradeTooLowException::what() const throw()
        {
                return "Bureaucrat Grade is too low! Must be between 1 and 150.";
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
       
Bureaucrat::Bureaucrat()
{
 }

Bureaucrat::~Bureaucrat()
{
 }

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
        grade = _grade;
        if (grade < 1)
                throw gradeTooHighException();
        if (grade > 150)
                throw gradeTooLowException();
        std::cout << "Param Constractor name == " << name << "grade == " << grade << std::endl;
}

int Bureaucrat::getGrade() const
{
        return grade;
}
const std::string Bureaucrat::getName() const
{
        return name;
}
void Bureaucrat::signForm(AForm &fr)
{
        try
        {
                fr.beSigned(*this);
                std::cout << name << " signed " << fr.getName() << std::endl;
        }
        catch (const std::exception &e)
        {
                std::cout << name << " couldn't sign " << fr.getName() << " because " << e.what() << std::endl;
        }
}
void Bureaucrat::executeForm(AForm const &fr)
{
        try
        {
                fr.execute(*this);
                std::cout << name << " executed " << fr.getName() << std::endl;
        }
        catch (std::exception &e)
        {
                std::cout << name << " couldn't execute " << fr.getName() << " because " << e.what() << std::endl;
        }
}