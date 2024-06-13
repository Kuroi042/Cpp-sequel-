#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
        cout << "default constractor for bureaucrate\n ";
}

Bureaucrat::~Bureaucrat()
{
        cout << "destractor for bureaucrate\n ";
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
        grade = _grade;
        if (grade < 1)
                throw gradeTooHighException();
        if (grade > 150)
                throw gradeTooLowException();
        cout << "Param Constractor name == " << name << "grade == " << grade << std::endl;
}

int Bureaucrat::getGrade() const
{
        return grade;
}
    const string Bureaucrat::getName() const 
        {
                return name;
        }
void Bureaucrat::signForm(AForm& fr)  
        {
                try{
                fr.beSigned(*this);
    std::cout << name << " signed " << fr.getName() << std::endl;}
                catch(std::exception &e){
                    std::cout << name << " couldn't sign " << fr.getName() << " because " << e.what() << std::endl;
      
                  } 
 }
 