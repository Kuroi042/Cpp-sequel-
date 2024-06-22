#include "AForm.hpp"

AForm::AForm():_name("default"),isSigned(false),grade2sign(1), grade2exec(150)
{
    // cout << "default constarctor for Aform\n";
    // isSigned = false;
}
AForm::~AForm()
{
    cout << "destractor for Aform"<<std::endl;
}

AForm::AForm(std::string name, int grade, int gradeExec) : _name(name), grade2sign(grade), grade2exec(gradeExec)
{
    if (grade2sign < 1 || grade2exec < 1)
        throw GradeTooHighException();
    if (grade2sign > 150 || grade2exec > 150)
        throw GradeTooLowException();

    // cout << "Bureaucrat== " << name << " grade == " << grade2sign << std::endl;
}
string const AForm::getName() const
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

int AForm::getGrade2exec()  const
{
    return grade2exec;
}

void AForm::beSigned(Bureaucrat const &br)
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
std::ostream& operator<<(std::ostream &os,  AForm &form) {
    // os << "Form Name: " << form.getName() << "\n";
     
    return os;
}


