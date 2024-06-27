#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{ 

    // std::cout<<"<<<<<ShrubberyCreationForm<<<<<\n";
    // try {
    //     Bureaucrat bob("Bob",137 );

    //     ShrubberyCreationForm shrubberyForm("Sh_target");
    //     bob.signForm(shrubberyForm);
    //    // bob.executeForm(shrubberyForm);
    //     shrubberyForm.execute(bob);

    // } catch (const std::exception &e) {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }
        // std::cout<<"<<<<<<RobotomyRequestForm<<<<<<<\n";
//  try {
//         Bureaucrat bob("Bob",45 );
//         RobotomyRequestForm rb("Rb_target");

//         bob.signForm(rb);
//         rb.execute(bob);
//         //bob.executeForm(rb);

//     } catch (const std::exception &e) {
//         std::cout << "Exception: " << e.what() << std::endl;
//     }
        std::cout<<"<<<<<<PresidentialPardonForm<<<<<<\n";
     try {
        Bureaucrat bob("Bob",5);
        PresidentialPardonForm pr("Pr_target");

        bob.signForm(pr);
        // std::cout<<pr.getIsSigned()<<::std::endl;
        pr.execute(bob);

    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    


    }