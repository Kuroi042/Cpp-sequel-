#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <string>
class ScalarConverte
{
private:
        std::string rawString;

public:
        // static int checkChar(std::string str)
        // {

        //         if (str.size() == 1 && isprint(str[0]) && !isdigit(str[0]))
        //                 return 1;
        //         else
        //                 return 0;
        // }

#include <string>
#include <cctype>

#include <iostream>
#include <string>
#include <cctype>

        static int checkChar(std::string str)
        {

                if (str.size() == 1 && isprint(str[0]) && !isdigit(str[0]))
                        return 1;
                else
                        return 0;
        }
        static int checkDigit(const std::string &str)
        {
                bool has_f = false;
                bool hasDot = false;
                bool hasDigit = false;
                size_t len = str.length();

                if (len == 0)
                        return 0;
                if (str == "f")
                        return 0; // f alone is not valid
                if (str[len - 1] == '.')
                        return 0;
                if (str[len - 1] == 'f')
                {
                        has_f = true; // Check for float at the end
                }

                size_t start = 0;

                if (str[0] == '+' || str[0] == '-')
                {
                        start = 1;
                }

                size_t end = has_f ? len - 1 : len;

                for (size_t i = start; i < end; ++i)
                {
                        if (str[i] == '.')
                        {
                                if (hasDot)
                                        return 0; // multiple . . .
                                hasDot = true;
                        }
                        else if (isdigit(str[i]))
                        {
                                hasDigit = true;
                        }
                        else
                        {
                                return 0; // Non-digit
                        }
                }

                if (hasDot)
                {
                        size_t dotPos = str.find('.');
                        if (dotPos == end - 1 && has_f)
                        {
                                return 3;
                        }
                }

                // Check if  invalid integer 5f
                if (!hasDot && has_f)
                {
                        return 0;
                }

                if (hasDot && hasDigit)
                {
                        if (has_f)
                        {

                                size_t dotPos = str.find('.');
                                if (dotPos == start || dotPos == end - 1)
                                {
                                        return 0;
                                }
                                return 3; // Valid float with f
                        }
                        else
                        {
                                return 2; // Valid double without f
                        }
                }

                if (hasDigit)
                        return 1; // Valid integer
                else
                        return 0; // Invalid
        }

        static void caseDigit(const std::string &raw)
        {
                std::cout << "case is int\n";
                int i = atoi(raw.c_str());
                if (isprint(i))
                        std::cout << "char : " << i << std::endl;
                else
                        std::cout << "char : " << "not displayble" << std::endl;
                std::cout << "int : " << i << std::endl;
                std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
                std::cout << "double : " << static_cast<float>(i) << ".0" << std::endl;
        }

        static void caseFloat(const std::string &str)
        {
                int i = 0;
                for (i = 0; i < (int)str.length(); i++)
                {
                        if (str[i] == '.')
                                break;
                }
                int j;
                for (j = 0; j < (int)str.length(); j++)
                {
                        if (str[j] == 'f')
                                break;
                }

                std::cout << "case is float\n";
                std::cout << str << std::endl;
                std::cout << "char : " << "*" << std::endl;
                std::cout << "int : " << static_cast<int>(atoi(str.substr(0, i).c_str())) << std::endl;
                std::cout << "float : " << str << std::endl;
                std::cout << "double : " << static_cast<double>(atof(str.substr(0, j).c_str())) << std::endl;
        }

        static void caseDouble(const std::string &str)
        {

                int i = 0;
                for (i = 0; i < (int)str.length(); i++)
                {
                        if (str[i] == '.')
                                break;
                }

                std::cout << "case is double\n";
                std::cout << str << std::endl;
                std::cout << "char : " << "Non displayable" << std::endl;
                std::cout << "int : " << static_cast<int>((atoi(str.substr(0, i).c_str()))) << std::endl;
                std::cout << "float : " << static_cast<float>(atof(str.c_str())) << "f" << std::endl;

                std::cout << "double : " << str << std::endl;
        }

        static void caseChar(const std::string &raw)
        {
                int i = atoi(raw.c_str());

                std::cout << "case is char\n";
                std::cout << "char : " << raw[0] << std::endl;
                if (isascii(i))
                        std::cout << "int : " << static_cast<int>(i) << std::endl;
                std::cout << "float : " << "impossible" << std::endl;
                std::cout << "double : " << "impossible" << std::endl;
        }
        static int checkforinfinite(std::string str)
        {

                if (str.length() == 3)
                        if (str.find("nan") == 0)
                                return 1;
                        else if (str.find("nanf") == 0)
                                return 2;
                        else if (str.find("-inf") == 0)
                                return 3;
                        else if (str.find("+inf") == 0)
                                return 4;
                        else if (str.find("-inff") == 0)
                                return 3;
                         else if(str.find("+inff") == 0)
                                return 4;
                        
        else    
                std::cout<<"incorrect iput nanf\n";
                return 0;
        }

        static void strangeCase(std::string raw)
        {
                if (raw == "nan")
                {
                        double i =  std::stod(raw.c_str());
                     std::cout<< "double : " <<numeric_limits<double>(i)<<std::endl;
                        std::cout << raw << std::endl;
                        std::cout << "char : " << "impossible" << std::endl;
                        std::cout << "int : " << "impossible"<< std::endl;
                        std::cout << "float : " << static_cast<float> < < < < "f" << std::endl;

                        std::cout << "double : " << << std::endl;
                }
        }

        static void convert(const std::string &raw)
        {
                if (checkforinfinite(raw))
                        strangeCase(raw);

                else if (checkChar(raw))
                {
                        caseChar(raw);
                }
                else if (checkDigit(raw) == 1)
                {
                        caseDigit(raw);
                }
                else if (checkDigit(raw) == 3)
                {
                        caseFloat(raw);
                }
                else if (checkDigit(raw) == 2)
                {
                        caseDouble(raw);
                }
                else
                {
                        std::cout << "input incorrect" << std::endl;
                }
        }
};

int main(int argc, char **argv)
{
        if (argc == 2)
        {

                std::string raw = (std::string)argv[1];
                ScalarConverte::convert(raw);
        }
        else
                std::cout << "argument are incorrect\n";
        return (1);
}
