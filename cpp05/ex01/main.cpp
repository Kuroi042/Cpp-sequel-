#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat br("charaf", 5);
        Form fr("Form1 ", 6, 2);
        // br.decrement();
        // br.decrement();
        // br.decrement();
 

        br.signForm(fr); //too low
        std::cout << br;
        std::cout << fr << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}