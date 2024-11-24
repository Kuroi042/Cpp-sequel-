#include "BitcoinExchange.hpp"

void openfile(const char* argv, const std::string& fileName) {
    
       
  
    if (fileName == "data.csv"  ) {
        std::string pathfile = "/Users/mbouderr/Desktop/cpp/cpp09/ex00/data.csv"; 
              std::ifstream  file(pathfile.c_str());
        if (!file.is_open()) {
            std::cout << "DATA not opened: " << pathfile << '\n';
        } else {
            std::cout << "DATA opened: " << pathfile << '\n';
        }
     file.close();
    }
        
   else  if (argv && strcmp(argv, "input.txt") == 0) {
       std::ifstream file(argv);
        if (!file.is_open()) {
            std::cout << "INPUT not opened: " << argv << '\n';
        } else {
            std::cout << "INPUT txt opened: " << argv << '\n';
        }
     file.close();
    }
}

Bitcoin::Bitcoin(char *argv)
{
  std::string filename = argv;
     openfile(NULL, "data.csv");

    // std::cout << "XXXXXXXXXX\n";

    openfile(argv, filename);
  
    cout << "maiwww\n";
    for (map<string, double>::iterator it = myMap.begin(); it != myMap.end(); it++)
    {
        std::cout << it->first << " ," << it->second << '\n';
    }
    cout << myMap.size() << std::endl;
};

void Bitcoin::parse_data(ifstream &file)
{

    string line;
    while (getline(file, line))
    {
        size_t fassila = line.find(',');
        if (fassila != line.npos)
        {
            string date = line.substr(0, fassila);
            double value = static_cast<float>(atof(line.substr(fassila + 1).c_str()));
            myMap.insert(make_pair(date, value));
        }
        else
            cout << "cant insert data\n";
    }
}
