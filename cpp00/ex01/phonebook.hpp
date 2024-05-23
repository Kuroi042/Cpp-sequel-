#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "contact.hpp"

class Phonebook
{
private:
   Contact contacts[8];
    std::string Name;
    std::string Nickname;
    std::string Numberphone;

public:
    Phonebook(void)
    {
        std::cout<<"Calling contractor\n";
    }

   void  set_Name(std::string newName)
    {
        Name = newName;
    }
    void set_Nickname(std::string newNickname)
    {
        Nickname = newNickname;
    }

    void set_Number( std::string newNumberphone)
    {
        Numberphone = newNumberphone;
    }

    std::string get_name()
    {
        return Name;
    }
    std::string get_Nickname()
    {
        return Nickname;
    }
       std::string  get_Number()
    {
       return Numberphone;
    }
    void Welcome();
    void Cmd_reader (std::string str);
    void showcontact();
        ~Phonebook()
        {
            std::cout<<"Calling destructor\n";
        }

};
#endif