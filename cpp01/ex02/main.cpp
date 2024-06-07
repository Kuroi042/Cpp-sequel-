#include <iostream>
using namespace std;
int main()
    {
        std::string str =  "HI THIS IS BRAIN";
        std::string *ptr =  &str;
        std::string &ref =   str;

        cout<<"the value of str is = "<<str<<endl;
         cout<<"the Ref of str is = "<<&str<<endl;


    }