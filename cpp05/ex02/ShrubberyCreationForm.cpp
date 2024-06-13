#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {
        cout<<"calling constractor for ShrubberyCreationForm class target is == " <<target<<std::endl;
        
    }

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if(getIsSigned() ==  false)  // grade > gradetosign 130 > 5 for ex
        {   
            throw GradeTooLowException();
        }
    if(executor.getGrade() <  getGrade2exec()) //  grade_exec == 5 grade = 1
        {
            throw     GradeTooHighException();
        }

    if(executor.getGrade() <=  getGrade2sign() && executor.getGrade() >getGrade2exec())
        {
                cout<<"print tree \n";
        }
}