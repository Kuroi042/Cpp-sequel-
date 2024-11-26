#include "BitcoinExchange.hpp"

void  Bitcoin::openfile(const char* argv, const std::string& fileName) {
    
       
  

        
 if (argv && strcmp(argv, "input.txt") == 0) {
  
       cout<<"printttt for inputtxt \n";
       std::ifstream file(argv);
        if (!file.is_open()) {
            std::cout << "INPUT not opened: " << argv << '\n';
                return;
        } else {
            std::cout << "INPUT txt opened: " << argv << '\n';
        }
                        cout<<"adrress of inputtxt  is == "<< &file<<std::endl;
       //     parse_datacsv(file);

            file.close();
           
    }
       else if (fileName == "data.csv") {

                cout<<"print for data csv\n";
        std::string pathfile = "/Users/mbouderr/Desktop/cpp/cpp09/ex00/data.csv"; 
              std::ifstream  file(pathfile.c_str());
        if (!file.is_open()) {
            std::cout << "DATA not opened: " << pathfile << '\n';
                   return;
        } else {
            std::cout << "DATA opened: " << pathfile << '\n';
            // cout<<"adrress of datacsv  is == "<< &file<<std::endl;
            parse_datacsv(file);
            file.close();
            return;
        }
      
    }
}

Bitcoin::Bitcoin(char *argv)
{
  std::string filename = argv;
    openfile(NULL, "data.csv");
    // std::cout << "XXXXXXXXXX\n";
//    openfile(argv, filename);
    // cout << "maiwww\n";
    // for (map<string, double>::iterator it = myMap.begin(); it != myMap.end(); it++)
    // {
    //     std::cout << it->first << " ," << it->second << '\n';
      //}
    // cout << myMap.size() << std::endl;
};

string  check_date(string date)
    {
        string line;
        size_t dilimiter =  line.find(',');
        int year =  atoi(line.substr(0,dilimiter).c_str());
        if(year <0)
            cout<<"years field is incorrect\n"<<std::endl; 
        cout<<"years == "<<year<<std::endl;
        cout<<dilimiter<<std::endl;

    }
void parseinput_txt(ifstream &file)
    {
        string line;

        while (getline(file, line))
    {
        size_t delimiter =  line.find('|');
            if(delimiter != line.npos )
        {
                 void check_date(string date)

        }
    } 
    }


void Bitcoin::parse_datacsv(ifstream &file)
{
   cout<<"printttt ||||||| "<<&file<<std::endl;
    string line;
    while (getline(file, line))
    {
        size_t delimitter = line.find(',');
        if (delimitter != line.npos)
        {
            string date = line.substr(0, delimitter);
           float value = static_cast<float >(atof(line.substr(delimitter + 1).c_str()));
            myMap.insert(make_pair(date, value));
        }
        else
            cout << "cant insert data\n";
    }
         for (map<string, float>::iterator it = myMap.begin(); it != myMap.end(); it++)
    {
        std::cout << it->first << "|" << it->second << '\n';
    }
                    
        file.close();
}
