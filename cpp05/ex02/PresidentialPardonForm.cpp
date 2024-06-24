#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target):AForm("PresidentialPardonForm",25,5), target(_target){

        std::cout<<"target for PresidentialPardonForm is " <<this->target<<std::endl; 
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
    {
        if(getIsSigned() == false){
            throw(PrBGradeTooLowException());
        }
        if(executor.getGrade() < getGrade2exec()){
        throw(PrBGradeTooHighException());
        }
        if(executor.getGrade() < getGrade2sign() && executor.getGrade() > getGrade2exec())
    {
        std::cout<<target<<"has been pardoned by Zaphod Beeblebrox"<<std::endl;
        
    }
    }