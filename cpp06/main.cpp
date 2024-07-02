#include <iostream>
#include <string>

int ft_atoi(char *str)
{
    int i = 0;
    int num  = 0;
    int sign = 1;
    while(str[i] == ' ')
        i++;
    if(str[i] == '-'){
        sign *=-1;
        i++;
        }   
    else if(str[i] == '+')
        i++;
    
    while(str[i])
        {
            if(str[i]>='0' && str[i]<='9')
                num*=10;
                num = num + str[i] - '0';
                    i++;
        }

    }

//     int ft_atoi(char *str)
// {
//     int i = 0;
//     int sign = 1;
//     int num = 0;
//     while (str[i] <= 32)
//         i++;
//     if (str[i] == '-')
//     {
//         sign *= -1;
//         i++;
//     }
//     else if (str[i] == '+')
//         i++;
//     while (str[i] && (str[i] >= '0' && str[i] <= '9'))
//     {
//         num = num * 10;
//         num = num + str[i] - '0';
//         i++;
//     }
//     return num*sign;
// }
