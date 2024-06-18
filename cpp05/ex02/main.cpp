#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{ 
    try {
        Bureaucrat bob("Bob", 1);
        ShrubberyCreationForm shrubberyForm("home");

        bob.signForm(shrubberyForm);
        shrubberyForm.execute(bob);

    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

//  try {
//         Bureaucrat bob("Bob",60 );
//         RobotomyRequestForm rb("home");

//         bob.signForm(rb);
//         std::cout<<rb.getIsSigned()<<::std::endl;
//         rb.execute(bob);

//     } catch (const std::exception &e) {
//         std::cerr << "Exception: " << e.what() << std::endl;
//     }
    }