#include "zombie.hpp"

zombie* zombieHorde (int N , std::string name)
    {
        
        int i = 0;
            zombie *zb=  new zombie[i];
        while( i <N)
        {
            zb[i].set_Name(name);
            zb[i].anounce();
            i++;
        }

        return zb;
    }