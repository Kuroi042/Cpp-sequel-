#include "ShrubberyCreationForm.hpp"
#include <stdio.h>
#include <fstream>




ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {
        cout<<"calling constractor for ShrubberyCreationForm class target is == " <<target<<std::endl;
        
    }

void ShrubberyCreationForm::execute(const Bureaucrat &executor)  const
{
    if(getIsSigned() ==  false)
        {   
            throw SHGradeTooLowException();
        }
    if(executor.getGrade() <  getGrade2exec()) 
        {
            throw     SHGradeTooHighException();
        }

    if(executor.getGrade() <=  getGrade2sign() && executor.getGrade() >getGrade2exec())
  {   
    printf("haha\n");
      std::ofstream outfile((target + "_shrubbery").c_str());
    if (outfile.is_open()) {
        outfile << "       _-_\n";
        outfile << "    /~~   ~~\\\n";
        outfile << " /~~         ~~\\\n";
        outfile << "{     chajara    }\n";
        outfile << " \\  _-     -_  /\n";
        outfile << "   ~  \\\\ //  ~\n";
        outfile << "_- -   | | _- _\n";
        outfile << "  _ -  | |   -_\n";
        outfile << "      //  \\ \\\\\n";
        outfile << "     // Jesus\\   \\\\\n";
        outfile.close();
    }
  }
     else {
        std::cerr << "Error: Could not create file " << target + "_shrubbery" << std::endl;
    }
}