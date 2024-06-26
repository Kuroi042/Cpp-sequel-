#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat br("charaf", 6);
        Form fr("Form1 ", 15, 5);
        br.decrement();
        br.decrement();
        br.decrement();
 

        br.signForm(fr); //too low
        std::cout << br << std::endl;
        std::cout << fr << std::endl;
    }
    catch (std::exception &e)
    {
        cerr << e.what();
    }
}