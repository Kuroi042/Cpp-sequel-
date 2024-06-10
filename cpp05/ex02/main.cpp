#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
    {
        try{
        Bureaucrat br("charaf",10 );
        Form fr("Form1 ", 8, 5);
        br.signForm(fr);
    }
        catch(std::exception &e)
            {
                cerr<< e.what()<<std::endl;
            }
    }