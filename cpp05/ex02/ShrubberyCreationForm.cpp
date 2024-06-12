#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {
        cout<<"calling constractor for ShrubberyCreationForm class target is == " <<target<<std::endl;
    }

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if(!getIsSigned())
        {   

        }



}
