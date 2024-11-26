#pragma once 

    #include <iostream>
    #include <fstream> 
    #include <map>
    #include <string>
#include <cstdlib> 

    using namespace std;


class Bitcoin
{
    private :
      std::map< string, float> myMap;
    public:
         Bitcoin(){};
        Bitcoin( char *argv );
                   
           
        ~Bitcoin(){}
 
          map<string,float>getMap()
            {
              return myMap;
            }
void     parse_datacsv(ifstream &file);
void  openfile(const char* argv, const std::string& fileName);

};