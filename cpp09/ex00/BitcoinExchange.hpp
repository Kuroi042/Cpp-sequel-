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

    void handle_data(const string &path);
};