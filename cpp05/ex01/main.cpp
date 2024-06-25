#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
    {
        try{
        Bureaucrat br("charaf",12 );
        Form fr("Form1 ", 0, 5);
        std::cout<<br<<std::endl;
           std::cout<<fr<<std::endl;
        br.signForm(fr);
    }
        catch(std::exception &e)
            {
                cerr<< e.what()<<std::endl;
            }
    }