#include <iostream>
#include <string>
#include <stdio.h>
class ScalarConverte
{
private:
        std::string rawString;

public:
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
                if (str[len - 1] == 'f')
                        has_f = true; // check for float

                size_t lenght = len;
                if (has_f) // to not include "f"
                {
                        lenght = len - 1;
                }

                for (size_t i = 0; i < lenght; ++i)
                {
                        if (str[i] == '.')
                        {
                                if (hasDot)
                                        return 0;
                                hasDot = true;
                        }
                        else if (isdigit(str[i]))
                        {
                                hasDigit = true;
                        }
                        else
                        {
                                return 0;
                        }
                }

                if (hasDot && hasDigit)
                {
                        if (has_f)
                        {
                                return 3; // is float
                        }
                        else
                        {
                                return 2; // case double
                        }
                }

                if (hasDigit)
                {
                        return 1; // Integer
                }

                return 0;
        }

        static void caseDigit(std::string raw)
        {

                std::cout << "char : " << "*" << std::endl;
                std::cout << "int : " << raw << std::endl;
                std::cout << "float : " << raw << ".0f" << std::endl;
                std::cout << "double : " << raw << ".0" << std::endl;
        }
        static void caseFloat(std::string str)
        {
                int i = 0;
                        for(i = 0; i<(int)str.length() ; i++)
                                {
                                        if(str[i] == '.')
                                                 break;
                                }

                        std::cout<<str<<::std::endl;
                std::cout << "char : " << "*"<< std::endl;
                std::cout << "int : " << str.substr(0,i) << std::endl;
                 std::cout << "float : " << str << std::endl;
                 std::cout << "double : " << str.substr(0,i).append(".0") << std::endl;
        }

        static void caseChar(std::string raw)

        {
                
                        
                std::cout << "char : " << raw  << std::endl;
                std::cout << "int : " << "impossible" << std::endl;
                std::cout << "float : " << "impossible" << std::endl;
                std::cout << "double : " << "impossible" << std::endl;
        }
        static void convert(const std::string &raw)
        {
                if (checkChar(raw))
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
                        std::cout << "char: impossible" << std::endl;
                        std::cout << "int: impossible" << std::endl;
                        std::cout << "float: " << raw << "f" << std::endl;
                        std::cout << "double: " << raw << std::endl;
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
