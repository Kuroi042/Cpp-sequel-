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

int Bureaucrat::getGrade()
{
        return grade;
}
    const string Bureaucrat::getName()
        {
                return name;
        }

int main()
        {
                try{
                        Bureaucrat br("chaaraf", 5);
                }
                catch(const std::exception& e)
                {
                           std::cerr << "Caught exception: " << e.what() << std::endl;
                }
                

        }