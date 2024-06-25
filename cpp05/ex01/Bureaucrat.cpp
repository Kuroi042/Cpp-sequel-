#include "Bureaucrat.hpp"

const char* Bureaucrat::gradeTooHighException::what() const throw() {
    return "Bureaucrat Grade is too high! Must be between 1 and 150.";
}
        const char* Bureaucrat::gradeTooLowException::what() const throw()
        {
                return "Bureaucrat Grade is too low! Must be between 1 and 150.";
        }
Bureaucrat::Bureaucrat()
{
        cout << "default constractor for bureaucrate\n ";
}

Bureaucrat::~Bureaucrat()
{
        cout << "destractor for bureaucrate\n ";
}

Bureaucrat::Bureaucrat(const std::string _name,const int _grade) : name(_name)
{
        grade = _grade;
        if (grade < 1)
                throw gradeTooHighException();
        if (grade > 150)
                throw gradeTooLowException();
        cout << "Param Constractor name == " << name << "grade == " << grade << std::endl;
}

int Bureaucrat::getGrade()
{
        return grade;
}
    const string Bureaucrat::getName()
        {
                return name;
        }
void Bureaucrat::signForm(Form& fr)
        {
                try{
                fr.beSigned(*this);
    std::cout << name << " signed " << fr.getName() << std::endl;}
                catch(std::exception &e){
                    std::cout << name << " couldn't sign " << fr.getName() << " because " << e.what() << std::endl;
      
                  } 
 }
 
std::ostream& operator<<(std::ostream& os,  Bureaucrat &br)

        {       
                std::cout<<" Bureacrate << overload \n";
                os<<" << overload Bureacrate name = "<<br.getName()<<std::endl;
                os<<" << Bureaucrate Grade = "<<br.getGrade()<<std::endl;
                return (os);
        }
