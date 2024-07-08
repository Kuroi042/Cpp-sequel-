#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
class ScalarConverte
{
private:
    std::string rawString;

public:
    static int checkChar(std::string str);
    static int checkDigit(const std::string &str);
    static void caseDigit(const std::string &raw);
    static void caseFloat(const std::string &str);
    static void caseDouble(const std::string &str);
    static void caseChar(const std::string &raw);
    static void convert(const std::string &raw);
    static int checkforinfinite(std::string str);
    static void strangeCase(std::string raw);
    static float convert_to_float(std::string from);
    static double convert_to_double(std::string from);
};