#include "ScalarConverte.hpp"

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