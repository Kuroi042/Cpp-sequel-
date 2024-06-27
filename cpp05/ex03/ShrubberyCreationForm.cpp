#include "ShrubberyCreationForm.hpp"
#include <fstream>



const char*  SHGradeTooLow2execException:: what() const throw()
    {
        return "  Grade is too Low to execute! Must respect the ShrubberyCreation Form ";
    }

const char*  SHGradeTooHighException:: what() const throw()
    {
        return "  Grade is too high! Must respect the ShrubberyCreation Form ";
    }
const char*  SHGradeTooLowException:: what() const throw()
    {
        return " Grade is too low! Must respect the ShrubberyCreation Form";
    } 


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target) {
     }

void ShrubberyCreationForm::execute(const Bureaucrat &executor)  const
{
    if(getIsSigned() ==  false)
        {   
            throw SHGradeTooLowException();
        }
    if(executor.getGrade() >  getGrade2exec()) 
        {
            
            throw     SHGradeTooLow2execException();
        }

    if(executor.getGrade() <=  getGrade2sign() && executor.getGrade() <= getGrade2exec())
  {   

      std::ofstream outfile((target + "_shrubbery").c_str());
       if (outfile.fail()) {
            std::cout<<"Failed to open the file.\n";
        }

        std::cout << "Creating Shrubbery" << std::endl;
        
        outfile << "       _-_\n";
        outfile << "   ~ ~/~~   ~~\\\n";
        outfile << " /~~    ~~  ~~u~~ ~~\\\n";
        outfile << "{  ~~ chajara  ~~~}\n";
        outfile << " \\  _-  ~~ -_~~/\n";
        outfile << "   ~  \\\\ //  ~\n";
        outfile << "_- -   |||| _- _\n";
        outfile << "  _ -  ||||   -_\n";
        outfile << "      //||\\\\\\\\\n";
        outfile << "     //roots\\   \\\\\n";

        outfile.close();
    }
 
}
ShrubberyCreationForm::~ShrubberyCreationForm()
    {
     }