#include "PmergeMe.hpp"

int main(int argc , char **argv)
    {
        PmergeMe pmg;
            
       if(argc >2)
            {
                pmg.parseArguments(argv,argc );
                pmg.sortList();
                pmg.printing();
            }
    else if(argc<=2)
        cout<<"number of arguments is incorrect !! \n";
    }



