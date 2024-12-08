#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class BitcoinExchange
{
private:
    map<string, float> input;

    float getExchange(const string &date);

public:
    BitcoinExchange() ;
    ~BitcoinExchange(); 
         BitcoinExchange(const BitcoinExchange &origin);
                 BitcoinExchange &operator=(const BitcoinExchange &origin);

    void handle_data(const string &path);
};