#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
const char *RBGradeTooHighException::what() const throw()
{
    return " Aie ! Grade is too High! Must respect the RobotomyRequest Form ";
}
const char *RBGradeTooLowException::what() const throw()
{
    return " Aie ! Grade is too Low ! Must respect the RobotomyRequest Form ";
}
const char *RBGradeTooLow2execException::what() const throw()
{
    return "  Grade is too Low to execute! Must respect the ShrubberyCreation Form ";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "target for RobotomyRequestForm is " << this->target << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (getIsSigned() == false)
    {
        throw(RBGradeTooLowException());
    }
    if (executor.getGrade() > getGrade2exec())
    {
        throw(RBGradeTooLow2execException());
    }

if (executor.getGrade() <= getGrade2sign() && executor.getGrade() <= getGrade2exec())
    {
srand(static_cast<unsigned int>(time(nullptr)));
int randomNumber = rand() % 2; 
 if (randomNumber == 0)
            {
        std::cout << " !!! TSADASDVJSAGHDJASHDAHSBDHJ !!!>>>> <<Drilling noises>>" << ::std::endl;
        std::cout << "3\n";
        std::cout << "2\n";
        std::cout << "1\n";
        std::cout << "0\n";
        std::cout << "....\n";
        std::cout << target << " has been robotomized successfully <50%> of the time" << std::endl;
    }
    else 
        {
                        std::cout << "Robotomy failed!" << std::endl;
        }
}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
