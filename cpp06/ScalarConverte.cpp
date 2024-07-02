#include <iostream>
#include <string>
#include <stdio.h>
class ScalarConverte
{
private:
        std::string rawString;

public:
        static int checkchar(std::string str)
        {

                if (str.size() > 1 || !isprint(str[0]))
                        return 0;
                else
                        return 1;
        }

        static int checkDegit(std::string str)
        {
                int i = 0;
                bool digit = 0;
                if ((str[0] == '0' && str[1] == '0') || (str[0] == '0' && str.size() > 1))
                        return 0;
                while (str[i] != '\0')
                {
                        if (str[0] =='.' ||str[str.size()] == '.')
                                return 1;
                             else    if (isdigit(str[i])|| str[i] == '.')
                                        digit = 1;
                                else
                                        break;
                        i++;
                }
                if (str[i] == '\0' && digit)
                        return 1;
                return 0;
        }
        static void caseDigit(std::string raw)
        {
                std::cout << "char : " << "impossible" << std::endl;
                std::cout << "int : " << raw << std::endl;
                std::cout << "float : " << raw << ".0f" << std::endl;
                std::cout << "double : " << raw << ".0" << std::endl;
        }

        static void caseChar(std::string raw)
        {
                std::cout << "char : " << raw[0] << std::endl;
                std::cout << "int : " << "impossible" << std::endl;
                std::cout << "float : " << "impossible" << std::endl;
                std::cout << "double : " << "impossible" << std::endl;
        }
        static void convert(std::string raw)
        {
                // if (checkDegit(raw))
                //         caseDigit(raw);

            if (checkchar(raw))
                        caseChar(raw);
                else if (checkDegit(raw))
                        printf("is float\n");
                // (raw);
                else if (!checkDegit(raw) || !checkchar(raw))
                        printf(" input incorrect \n");
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
