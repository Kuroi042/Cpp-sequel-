#include "phonebook.hpp"
using namespace std;

void Phonebook::Welcome()
    {   
        std::string str;
        std::cout<<"Wecolme to phonebook remake the most borring exercise ever in 42 common core anyway hope u enjoy it Enter y/n to continue \n";
                            getline(std::cin, str);
        if(str[0] != 'y')
            exit(1);
            else {
            while(1){
                                                getline(std::cin, str);
            std::cout<<"enter a Name:_ \n";
            Phonebook::set_Name(str);
            if(str.empty())
                 break;
            }
            while(1){
                                            getline(std::cin, str);
                  std::cout<<"enter a Nickname:_ \n";
            Phonebook::set_Nickname(str);
            if(str.empty())
                 break;
            }


    

        }

    }

// void Phonebook::Cmd_reader(std::string str)
//     {
        

//         while(str.length()>0){
        
            
//             std::cout<<"enter a Name:_ \n";
//             Phonebook::set_Name(str);

        



//         }

//     }

int main()
{
    Phonebook pb;
    pb.Welcome();

}