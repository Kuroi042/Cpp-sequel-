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

    Form::Form(std::string name, int grade):_name(name),grade_To_Sign(grade)
        {
            if(grade_To_Sign <1)
                throw GradeTooHighException();
            if(grade_To_Sign>150)
                 throw GradeTooLowException();
    
            cout<<"Bureaucrat== " <<name<< " grade == " <<grade_To_Sign<<std::endl;
        } 
const string Form::getName()
{
    return _name;
}
bool Form::getIsSigned()
{
    return isSigned;
}
void Form::beSigned(const Bureaucrat& br)
    {
        

    }


