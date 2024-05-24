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
    void set_Name(std::string newName)
        {
            Name =  newName;
        }
    std::string get_Name()
        {
            return Name;
        }


};
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );




#endif