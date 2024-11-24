#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin(char *argv)
{

    std::ifstream file(argv);
    if ((!file.is_open()))
    {
        cout << "cant open csv\n";
        exit(1);
    }
    else
    {

        parse_data(file);
    }
    file.close();
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
