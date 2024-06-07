#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
using namespace std;
 class   zombie
{

    private:
    std::string Name;
    public:
    zombie(){
        cout<<"const\n";
    }
    ~zombie(){cout<<"destra\n";
    }
    void set_Name(std::string newName)
        {
            Name =  newName;
        }
    std::string get_Name(void)
        {
            return Name;
        }
    void anounce(void)
        {
            cout<< get_Name() << "zombie hordes\n";
        }
};

zombie*     zombieHorde( int N, std::string name );

#endif