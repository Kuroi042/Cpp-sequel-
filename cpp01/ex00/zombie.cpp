#include "zombie.hpp"
void  Zombie::anounce(void)
    {
        // this->Name = "Charaf";
        cout<<this->Name<<": BraiiiiiiinnnzzzZ..."<<endl;
    }

Zombie*  newZombie( std::string name )
{
       Zombie *zb;  
       zb =  new Zombie();      
        zb->set_Name(name);  
          return zb;
}
