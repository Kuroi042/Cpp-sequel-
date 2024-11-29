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

      //  while (getline(file, line))
      //   {
      //       size_t dilimiter = line.find('-');
      //       if(dilimiter!= line.npos){
      //       year =  (line.substr(0, dilimiter) );
      //               if(year.length()>4 ){
      //                   cout<<"years kbir\n";
                        
      //               }
      //               cout<<"years == "<<year<<std::endl;
      //           //    break;
      //                   cout<<"dilimiter == "<<dilimiter<<std::endl;      
      //               month  = (line.substr(dilimiter+1, dilimiter) );
      //               cout<<"month  = "<<month <<std::endl;
      //                   cout<<"dilimiter == "<<dilimiter<<std::endl;      
      //               dilimiter+=2;
      //               day   = (line.substr(dilimiter+1, line.find('|') ) );
      //                 cout<<"day= "<<day <<std::endl;
      //       }
 
    //  string dilimiter = "-";
    //             string value =  line.substr(0, line.find('-')) ;
    //               year = static_cast<int>(atoi(value.c_str()));                                                    
    //                 cout<<"years "<< year <<std::endl;
    //                         // value.empty();
    //                 string month=  line.substr(value.append(dilimiter).length(), value );
    //                             cout<<"month == |"<<month<<"|"<<std::endl;
                    