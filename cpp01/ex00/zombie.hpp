#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
using namespace std;

class Zombie{

private:
std::string Name;
public:

Zombie(){
    cout<<"constarctor for Zombie\n";
}
~Zombie(){
    cout<<"destractor for Zombie\n";
}
void set_Name(std::string newName){
    Name =  newName;
}
std::string get_Name()
{
    return Name;
}
void anounce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif