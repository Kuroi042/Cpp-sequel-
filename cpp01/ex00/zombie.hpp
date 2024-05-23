#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
using namespace std;
class Zombie{

    private:
    std::string Name;

    public:
 

    void anounce(void);
    Zombie()
    {
        cout<<"zombie constractor\n";
    }
    ~Zombie(){

        cout<<"zombie desstractor\n";
    }

    Zombie* newZombie( std::string name );


};





#endif