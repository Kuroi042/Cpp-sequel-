#include "PresidentialPardonForm.hpp"

const char *PrBGGradeTooLow2execException::what() const throw()
{
    return "  Grade is too Low to execute! Must respect the PresidentialPardon Form ";
}

const char *PrBGradeTooHighException::what() const throw()
{
    return "  Form PresidentialPardon  error Hight grade value  \n";
}
const char *PrBGradeTooLowException::what() const throw()
{
    return " Form PresidentialPardon  error Low grade value  \n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentialPardonForm", 25, 5), target(_target)
{

    std::cout << "target for PresidentialPardonForm is " << this->target << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (getIsSigned() == false)
    {
        throw(PrBGradeTooLowException());
    }
    if (executor.getGrade() > getGrade2exec())
    {
        throw(PrBGGradeTooLow2execException());
    }
    if (executor.getGrade() <= getGrade2sign() && executor.getGrade() <= getGrade2exec())
    {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}

PresidentialPardonForm::~PresidentialPardonForm(){};
