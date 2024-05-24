#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
using namespace std;
#include "Weapon.hpp"
class HumanA{

private : 
    Weapon  weapon;
    std::string Name;
public:

    void setName(std::string newName){
        Name = newName;
    }
    HumanA(std::string humanA_name ,  std::string typeWeapon)
        {
        weapon.setType(typeWeapon);
        this->Name  =  humanA_name;
        }
    std::string getName(void)
        {
            return Name;
        }
 
    ~HumanA()
        {
            cout<<"calling destractor for HumanA\n";
        }
    void attack()
        {
            cout<< this->Name<< "attack with thier " << weapon.getType()<<endl;
        }

};


#endif