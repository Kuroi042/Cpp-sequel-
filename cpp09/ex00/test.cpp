#include <iostream>
#include <fstream>
#include <map>
 #include <cstdlib>
#include <string>


using namespace std;

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        fstream file(argv[1]);
        if (!file.is_open())
        {
            cout << "ERROR OPEN\n";
            exit(1);
        }
        string key;
        string value;
    string year;
    string day;
        getline(file,key, '|');
        getline( file,value  );
                cout<<key<<endl;
                cout<<value<<endl;
        size_t year_start  = value.find_first_not_of(" ");
        size_t year_end =  value.find_last_not_of(" ");
        
            value =  value.substr(year_start, year_end-year_start+1);
                cout<<value<<std::endl;
         

   
        }           
else
    cout << "argc is incorrect\n";
    }
    
 