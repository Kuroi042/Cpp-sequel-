#include "RPN.hpp"


int main(int argc, char** argv) {
    if (argc == 2) {
        RPN calc;
        calc.LoadSign(std::string(argv[1]));
        calc.Setup_calculator();
        return 0;
    } else {
        std::cerr << "error: invalid number of arguments\n";
        return 1;
    }
}