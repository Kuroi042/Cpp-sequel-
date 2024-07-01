#include <iostream>
#include <string>
#include <stdio.h>
class ScalarConverte
{
private:
        std::string rawString;

public:
        static void convert(std::string raw)
        {
        if(checkRaw(raw) == 1)
                printf("is digit\n");
        else if(checkRaw(raw) == 2)
                printf("is alpha");
        else 
                printf("error\n");
        }
        static int checkRaw(std::string raw)
        {
                int i = 0;
                bool digit = 0;
                bool alpha = 0;
                while (raw[i] != '\0')
                {
                        if (isdigit(raw[i]))
                                digit = 1;
                        else
                                break;
                        i++;
                }
                if (raw[i] == '\0' && digit)
                        return 1;

                i = 0;
                while (raw[i] != '\0')
                {
                        if (isalpha(raw[i]))
                                alpha = 1;
                        else
                                break;
                        i++;
                }
                if (raw[i] == '\0' && alpha)
                        return 2;
                return 3;
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
        return (EXIT_FAILURE);
}
 