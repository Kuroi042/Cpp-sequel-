#include "AForm.hpp"

AForm::AForm()
{
    cout << "default constarctor for Aform\n";
    isSigned = false;
}
AForm::~AForm()
{
    cout << "destractor for Aform\n";
}

AForm::AForm(std::string name, int grade, int gradeExec) : _name(name), grade2sign(grade), grade2exec(gradeExec)
{
    if (grade2sign < 1 || grade2exec < 1)
        throw GradeTooHighException();
    if (grade2sign > 150 || grade2exec > 150)
        throw GradeTooLowException();

    cout << "Bureaucrat== " << name << " grade == " << grade2sign << std::endl;
}
const string AForm::getName()
{
    return _name;
}

 bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGrade2sign() const
{
    return grade2sign;
}

int AForm::getGrade2exec() const 
{
    return grade2exec;
}

void AForm::beSigned(Bureaucrat &br)
{
    if(br.getGrade()<grade2sign)
        {
                isSigned = true;
        }
    
    else if (br.getGrade() > grade2sign)
    {
        throw GradeTooLowException();
    }

}
