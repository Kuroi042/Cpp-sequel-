#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
    {
        try{
        Bureaucrat br("charaf",12 );
        Form fr("Form1 ", 11, 5);
        br.signForm(fr);
    }
        catch(std::exception &e)
            {
                cerr<< e.what()<<std::endl;
            }
    }