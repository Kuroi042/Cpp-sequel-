#include "Form.hpp"

const char *Form::FormGradeTooHighException::what() const throw()
{
    return "Form Grade is too high\n";
}
const char *Form::FormGradeTooLowException::what() const throw()
{
    return "Form  Grade is too low\n";
}

Form::Form() : _name("none"), isSigned(false), grade2sign(150), grade2exec(1)
{
     isSigned = false;
}
Form::~Form()
{}

Form &Form::operator=(const Form &original) {
    if (this != &original) {
         isSigned = original.isSigned;
    }
    return *this;
}
Form::Form(const Form &other): _name(other._name), isSigned(other.isSigned), grade2sign(other.grade2sign), grade2exec(other.grade2exec) {}

Form::Form(std::string name, const int grade, const int gradeExec) : _name(name), grade2sign(grade), grade2exec(gradeExec)
{
    if (grade2sign < 1 || grade2exec < 1)
        throw FormGradeTooHighException();
    if (grade2sign > 150 || grade2exec > 150)
        throw FormGradeTooLowException();

 }
const std::string Form::getName()
{
    return _name;
}
bool Form::getIsSigned()
{
    return isSigned;
}
int Form::getGrade2sign()
{
    return grade2sign;
}
int Form::getGrade2exec()
{
    return grade2exec;
}

bool Form::beSigned(Bureaucrat &br)
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
std::ostream &operator<<(std::ostream &os, Form &Fr)
{
    os << "formName  = " << Fr.getName();
    os << " << GradToSign = " << Fr.getGrade2sign();
    os << " << Grad2Execute = " << Fr.getGrade2exec();
    os << " << isSigned == " << Fr.getIsSigned();
    return os;
}
