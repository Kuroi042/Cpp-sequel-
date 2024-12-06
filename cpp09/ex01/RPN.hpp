#pragma once
#include <iostream>
#include <stack>
using namespace std;
class RPN {
private:
    std::string sign;
    std::stack<int> mystack;
    int performOperation(char operation);


public:
    RPN();
    ~RPN();

  
    void LoadSign(const std::string& sign);
    void Setup_calculator();
};