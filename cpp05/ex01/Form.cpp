#include "Form.hpp"

const char* Form::FormGradeTooHighException::what() const throw()
    {
                return "Form Grade is too high! Must be between 1 and 150.";

    }
    const char* Form::FormGradeTooLowException::what() const throw()
    {
        return "Form  Grade is too low! Must be between 1 and 150.";
    }

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
                throw FormGradeTooHighException();
            if(grade2sign>150 || grade2exec >150)
                 throw FormGradeTooLowException();

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
        throw   FormGradeTooLowException();
            }
            isSigned = false;
    }
       std::ostream &operator<<(std::ostream &os , Form &Fr)
        {
            std::cout<<"form << overload\n";
        os<<" << formName  = "<<Fr.getName() <<std::endl;
        os<<" << GradToSign = "<<Fr.getGrade2sign() <<std::endl;
        os<<" << Grad2Sign = "<<Fr.getGrade2exec() <<std::endl;

                return os;
        }


