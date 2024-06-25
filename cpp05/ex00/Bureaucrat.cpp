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
        cout << "Param Constractor name == " <<getName() << " ||  grade == " << getGrade()<< std::endl;
}

int Bureaucrat::getGrade()
{
        return grade;
}

const string Bureaucrat::getName()
        {
                return name;
        }

std::ostream& operator<<(std::ostream& os,  Bureaucrat &br)

        {
                os<<"<< overload Bureacrate name = "<<br.getName()<< "Bureaucrate Grade = "<<br.getGrade()<<std::endl;
                return (os);
        }
 void Bureaucrat::BrDecrement()
        {
                grade++;
                if(getGrade()>150)
                        throw gradeTooLowException();
        }
 void Bureaucrat::BrIncrement()
        {
                grade--;
                if(getGrade()<1)
                        throw gradeTooHighException();
        }