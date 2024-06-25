#include "Form.hpp"

Form::Form():_name("none"),isSigned(false),grade2sign(150),grade2exec(1)
{
    cout << "default constarctor for form\n";
    isSigned = false;
}
Form::~Form()
{
    cout << "destractor for form\n";
}

    Form::Form(std::string name, const int grade, const int gradeExec):_name(name),grade2sign(grade),grade2exec(gradeExec)
        {
            if(grade2sign <1 || grade2exec<1)
                throw GradeTooHighException();
            if(grade2sign>150 || grade2exec >150)
                 throw GradeTooLowException();

            cout<<"Bureaucrat== " <<name<< " grade == " <<grade2sign<<std::endl;
        } 
const string Form::getName()
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

void Form::beSigned( Bureaucrat& br)
    {
     if(br.getGrade() > grade2sign)
            {
        throw   GradeTooLowException();
            }
            isSigned = false;
    }
      


