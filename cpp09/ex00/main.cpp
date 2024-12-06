#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
    BitcoinExchange Database;
    if (argc == 2)
    {
        Database.handle_data(argv[1]);
    }
    else
    {
        cerr << "Error: Invalid number of arguments.\n";
    }

    return 0;
}
