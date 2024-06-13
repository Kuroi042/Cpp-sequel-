#ifndef SHRUBBERYCREATION
#define SHRUBBERYCREATION
#include <iostream>
#include "AForm.hpp"
class AForm;

class ShrubberyCreationForm : public AForm {
private :
std::string target;
public :
    ShrubberyCreationForm(const std::string &target);
    void execute(const Bureaucrat &executor) const;
    virtual ~ShrubberyCreationForm(){};
};

#endif
