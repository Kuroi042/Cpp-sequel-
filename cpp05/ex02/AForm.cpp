#include "AForm.hpp"

AForm::AForm() : _name("none"), isSigned(false), grade2sign(1), grade2exec(150)
{
    isSigned = false;
}
AForm::~AForm()
{
}

const char *AForm::FormGradeTooHighException::what() const throw()
{
    return "Form Grade is too high! Must be between 1 and 150.";
}
const char *AForm::FormGradeTooLowException::what() const throw()
{
    return "Form  Grade is too low! Must be between 1 and 150.";
}
AForm &AForm::operator=(const AForm &original)
{
    if (this != &original)
    {
        isSigned = original.isSigned;
    }
    return *this;
}
AForm::AForm(const AForm &other) : _name(other._name), isSigned(other.isSigned), grade2sign(other.grade2sign), grade2exec(other.grade2exec) {}

AForm::AForm(std::string name, int grade, int gradeExec) : _name(name), grade2sign(grade), grade2exec(gradeExec)
{
    if (grade2sign < 1 || grade2exec < 1)
        throw FormGradeTooHighException();
    if (grade2sign > 150 || grade2exec > 150)
        throw FormGradeTooLowException();
}

std::string const AForm::getName() const
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

bool AForm::beSigned(Bureaucrat const &br)
{

    if (br.getGrade() > grade2sign)
    {
        return false;
    }
    else if (br.getGrade() <= grade2sign)
    {
        isSigned = true;
    }
    return isSigned;
}


std::ostream &operator<<(std::ostream &os, AForm &form)
{
    os << "Form Name: " << form.getName() << "\n";
    
    return os;
}
