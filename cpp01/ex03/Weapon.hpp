#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include "HumanA.hpp"
using namespace std;
class Weapon{

private : 
    std::string type;
public:

    Weapon(std::string Weapontype)
        {
            this->type =  Weapontype;

        }
    void setType(std::string newType){
        type = newType;
    }
    std::string getType(void)
        {
            return type;
        }
        Weapon(){
            cout<<"calling constarctor for weapon\n";
        }
    ~Weapon()
        {
            cout<<"calling destractor for weapon\n";
        }

};


#endif