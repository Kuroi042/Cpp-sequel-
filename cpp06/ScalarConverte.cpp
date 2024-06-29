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
                if (is_what(raw) == 1)
                {
                        printf("raw is digit\n");
                }
                else if (is_what(raw) == 2)
                {
                        printf("raw is alpha\n");
                }
                else if (is_what(raw) == 3)
                {
                        printf("raw is ta9lwa\n");
                }
        }
        static int is_what(std::string raw)
        {
                bool is_digit = 0;
                bool is_alpha = 0;
                int j = 0;
                for (int i = 0; i < (int)raw.length(); i++)
                {
                        j = 0;
                        while (j < i)
                        {
                                if (isdigit(raw[i]) && is_alpha != 1)
                                {
                                                                                                printf("mamamama\n");

                                        is_digit = 1;
                                        // return 1;
                                }
                                else if (isalpha(raw[i]) && is_digit != 1)
                                {
                                                                                                printf("papa\n");

                                        is_alpha = 1;
                                        // return 2;
                                }

                                else if(is_digit == 1 && is_alpha == 1 )
                                {
                                        {
                                                        printf("mamamama\n");
                                                return 3;
                                                break;
                                        }
                                }
                                j++;
                        }
                }

                return 0;
        }
};

int main(int argc, char **argv)
{
        if (argc == 2)
        {

                std::string raw = (std::string)argv[1];
                ScalarConverte::convert(raw);
                // std::cout<<raw <<std::endl;
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

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i] != '\0')
    {
	j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
