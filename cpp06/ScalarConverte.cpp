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

            
                 if (checkdigit(raw) == 2)
                        printf("all digit\n");
                else if (checkdigit(raw) == 1)
                        printf("all alpha\n");
                        else 
                        printf("errpr\n");
        }
        static int checkdigit(std::string raw)
        {
                int i = 0;
                bool digit = 0;
                bool alpha = 0;
                // case all digit
                while (raw[i] != '\0')
                {
                        if (isdigit(raw[i]))
                        {
                                digit = 1;
                        }
                        else
                                break;
                        i++;
                }
                i = 0;
                while (raw[i] != '\0')
                {
                        if (isalpha(raw[i]))
                        {
                                alpha = 1;
                        }
                        else
                                break;
                        i++;
                }

                i = 0;

                if (raw[i] == '\0')
                {
                        if (alpha == 1)
                                return 1;
                        if (digit == 1)
                                return 2;
                }
                else if (raw[i] != '\0')
                        return 3;

                return 0;
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

// for (int i = 0; i < (int)raw.length(); i++)
// {
//         for(int j = 0;j<i;j++){
//         if (isdigit(raw[j]) && is_alpha != 1)
//         {
//                 is_digit = 1;
//                 return 1;
//         }
//         else if (isalpha(raw[j])&& is_digit != 1)
//         {
//                 is_alpha = 1;
//                 return 2;
//         }

//         else {
//         printf("makayn ta9lwa\n");
//                 return 3;
//         }
//         }
// }
