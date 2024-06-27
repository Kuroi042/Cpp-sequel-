#include "Bureaucrat.hpp"
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


const char *Bureaucrat::gradeTooHighException::what() const throw()
{
        return "Bureaucrat Grade is too high!";
}
const char *Bureaucrat::gradeTooLowException::what() const throw()
{
        return "Bureaucrat Grade is too low!";
}

Bureaucrat::Bureaucrat()
{
 }

Bureaucrat::~Bureaucrat()
{
 }

Bureaucrat::Bureaucrat(const std::string _name, const int _grade) : name(_name)
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
void Bureaucrat::signForm(Form &fr)
{

        if (fr.beSigned(*this) == true)
        {
                std::cout << name << " signed " << fr.getName() << std::endl;
        }
        else{

                std::cout<< name <<" couldnt sign form\n";
                // throw gradeTooLowException(); //no need !! 
}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &br)

{
        os << br.getName();
        os << " Bureaucrate grade " << br.getGrade() << std::endl;
        return (os);
}
 void Bureaucrat::decrement()
        {
                grade++;
                if(getGrade()>150)
                        throw gradeTooLowException();
        }
 void Bureaucrat::increment()
        {
                grade--;
                if(getGrade()<1)
                        throw gradeTooHighException();
        }