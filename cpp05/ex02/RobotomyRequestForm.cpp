#include "RobotomyRequestForm.hpp"
#include<unistd.h> 

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45), target(target)
    {
        std::cout<<"target for RobotomyRequestForm is " <<this->target<<std::endl; 
    }


void RobotomyRequestForm::execute(const Bureaucrat &executor) const
    {
        if(getIsSigned() == false){
            throw(RBGradeTooLowException());
        }
        if(executor.getGrade() < getGrade2exec()){
        throw(RBGradeTooHighException());
        }
        if(executor.getGrade() < getGrade2sign() && executor.getGrade() > getGrade2exec())
    {
        printf("hahahah\n");
        std::cout<<target<<" <<<!!! TSADASDVJSAGHDJASHDAHSBDHJ !!!>>>> <<Drilling noises>>"<<::std::endl;
        sleep(2);
        std::cout<<target<<" has been robotomized successfully 50% of the time" <<std::endl;
    }
    }