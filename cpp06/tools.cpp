#include <iostream>
#include <string>
#include <stdio.h>

./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0

              {
                        
                        std::cout << "char: impossible" << std::endl;
                        std::cout << "int: " <<str.substr(0,i)<< std::endl;
                        std::cout << "float: " << raw << "f" << std::endl;
                        std::cout << "double: " << raw << std::endl;
                }