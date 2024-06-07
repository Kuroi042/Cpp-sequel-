#include "zombie.hpp"


Zombie* newZombie( std::string name )
{
    Zombie *zb;
    zb =  new Zombie;
    zb->set_Name(name);
    zb->anounce();
    return zb;
}
