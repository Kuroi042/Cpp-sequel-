#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
    {
        try{
        Bureaucrat br("charaf",195 );
        Form fr("Form1 ", 11, 5);
        std::cout<<br<<std::endl;
           std::cout<<fr<<std::endl;
        br.signForm(fr);
    }
        catch(std::exception &e)
            {
                cerr<< e.what()<<std::endl;
            }
    }