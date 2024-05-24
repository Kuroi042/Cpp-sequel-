#include "zombie.hpp"
int main()
    {
        randomChump("charaf");
        Zombie Charaf;       
        Charaf.set_Name("Yassine");
        Charaf.anounce();
        Zombie *zb =  newZombie("mbouderrr");
        cout<<zb->get_Name()<<endl;
        zb->anounce();
        return 0;
    }
