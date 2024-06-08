#include "Form.hpp"

Form::Form()
{
    cout << "default constarctor for form\n";
    isSigned = false;
}
Form::~Form()
{
    cout << "destractor for form\n";
}

    Form::Form(std::string name, int grade, int gradeExec):_name(name),grade2sign(grade),grade2exec(gradeExec)
        {
            if(grade2sign <1)
                throw GradeTooHighException();
            if(grade2sign>150)
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

void Form::beSigned( Bureaucrat& br)
    {
                 if(br.getGrade()  <1)
                throw GradeTooHighException();
            if(br.getGrade() >150)
                 throw GradeTooLowException();
    
    else if(br.getGrade() == 1)
            {isSigned = true;
            br.signForm();
            }
        else
            isSigned = false;
    }


