#include <iostream>
#include <string>


class test {
    private :
    // static std::string zab;
    public :
 
static void staticmethod(std::string raw)
    {
        int i = 0;
        i = raw.length();
        std::cout<<"zab w 9lwa fihom "<< i <<std::endl;
    }

void nonstaticMethod()
    {
        std::cout<<"nonstaticmethod\n";
    }

    
};
 
int main() 
{
 
 
    test::staticmethod("chrafasdahsdjhabds");
 
// t.nonstaticMethod();

}