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
      std::map< string, double> myMap;
    public:
         Bitcoin(){};
        Bitcoin( char *argv );
                   
           
        ~Bitcoin(){}
 
          map<string,double>getMap()
            {
              return myMap;
            }
void     parse_data(ifstream &file);




};