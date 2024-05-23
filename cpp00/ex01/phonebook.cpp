#include "phonebook.hpp"
using namespace std;

void Phonebook::Welcome()
{
    std::string str;
    std::cout << "Wecolme to phonebook remake the most borring exercise ever in 42 common core anyway hope u enjoy it Enter y/n to continue \n";
    
    Phonebook::Cmd_reader(str);
 

}

void Phonebook::Cmd_reader(std::string str)
    {
  
    while (1)
    {
        std::cout << "enter a Name:_ ";
        getline(std::cin, str);  
        Phonebook::set_Name(str);
        cout << Name << endl;
              if(str.length()>0)
                break;
    }
    while (1)
    {
        std::cout << "enter a Nickname:_ ";
        getline(std::cin, str);
        Phonebook::set_Nickname(str);
        cout << Nickname << endl;
        if(str.length()>0)
                break;
    }
    while (1)
    {
        std::cout << "enter ur number phone_ ";
        getline(std::cin, str);
        Phonebook::set_Number(str);
        cout << Numberphone << endl;
              if(str.length()>0)
                break;
    }
            Phonebook::showcontact();

    }
         
     
void Phonebook::showcontact()
{
    
    std::cout<<"contactinfos\n";
        cout<<"Name  ==" <<Name<<endl;
        cout<<"NickName  ==" <<Nickname<<endl;    
        cout<<"Number  ==" <<Numberphone<<endl;    
    
}

int main()
{
    Phonebook pb;
    pb.Welcome();
}