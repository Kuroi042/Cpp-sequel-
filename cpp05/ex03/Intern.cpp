#include "Intern.hpp"

AForm *Intern::makeForm(const std::string &NameForm, std::string Target)
{
    int i = 0;
    AForm *(Intern::*form[])(std::string) = {&Intern::FormShrubberyCreation, &Intern::FormPresidentialPardon, &Intern::FormRobotomyRequest};
    std::string formtype[3] = {"ShrubberyCreation", "PresidentialPardon", "RobotomyRequest"};
    while (i < 3)
    {
        if (formtype[i] == NameForm)
        {

            std::cout << "intern create  " << formtype[i] << std::endl;
            return (this->*form[i])(Target);
        }
        i++;
    }
    throw Intern::ErrorFormInputException();
}
Intern::Intern(){};

AForm *Intern::FormPresidentialPardon(std::string target)
{
    return new PresidentialPardonForm(target);
}
AForm *Intern::FormShrubberyCreation(std::string target)
{
    return (new ShrubberyCreationForm(target));
}
AForm *Intern::FormRobotomyRequest(std::string target)
{
    return (new RobotomyRequestForm(target));
}
Intern::~Intern(){};
const char *Intern::ErrorFormInputException::what() const throw()
{
    return ("incorrect form input ");
}