#include "Intern.hpp"

AForm* Intern::makeForm(std::string NameForm , std::string Target)
    {
        int i = 0;
        AForm *form[] ={FormPresidentialPardon(Target),FormShrubberyCreation(Target),FormRobotomyRequest(Target)
         };
         std::string formtype[3] ={"PresidentialPardon","ShrubberyCreation","RobotomyRequest"};
         while(i <3)
            {
                if(NameForm == formtype[i]  )
                    {
                        std::cout<<"intern create "<<NameForm<<std::endl;
                        for(int j = 0;j<3;j++)
                            {
                                if(j!=i)
                                    delete form[j];
                            }
                            return form[i];
                    }
                    else 
                        delete form[i];
            }
        
            throw Intern::ErrorFormInputException();


    }


AForm* Intern::FormPresidentialPardon(std::string target) {
    return new PresidentialPardonForm(target);

}
AForm *Intern::FormShrubberyCreation(std::string target)
    {
            return(new ShrubberyCreationForm(target) );
    }
AForm *Intern::FormRobotomyRequest(std::string target)
    {
            return(new ShrubberyCreationForm(target) );
    }
    
const char *Intern::ErrorFormInputException::what() const throw()
    {
        return ("incorrect form input ");
    }