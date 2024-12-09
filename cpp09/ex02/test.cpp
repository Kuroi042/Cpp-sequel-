#include <sstream>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    stringstream ss;
    string temp;
    if (argc > 1)
    {
        cout << "aegc == " << argc << std::endl;
        for (size_t i = 1; i < argc; i++)
        {
            ss << argv[i];

            while(ss >> temp)
                {

        cout << "temp == " << temp << std::endl;
                }
            ss.clear();
        }
    }
    else
        cout << "error args\n";
}