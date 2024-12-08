#include "RPN.hpp"

 
 
RPN::RPN() {}

RPN::RPN(const RPN &origin)
{
	*this = origin;
}


void RPN::LoadSign( const std::string& sign) {
    this->sign = sign;
}

RPN::~RPN() {};

static int ConvertoInt(char value) {
        return value - '0';
    }

RPN		&RPN::operator=(const RPN &origin)
{
	if (this != &origin){
		this->sign = origin.sign;
         this->mystack =  origin.mystack;
    }
	return (*this);
}

int RPN::performOperation(char operation) {
    int first, second;

    if (mystack.size() < 2)
        return 0;
    second = mystack.top();
    mystack.pop();

    first = mystack.top();
    mystack.pop();
    cout <<"first "<<first<< " second "<<second<<std::endl;

    if (operation == '+')
        mystack.push(first + second);
    else if (operation == '-')
        mystack.push(first - second);
    else if (operation == '*')
        mystack.push(first * second);
    else if (operation == '/') {
        if (!second) // Avoid division by zero
            return 0;
        mystack.push(first / second);
    } else
        return 0;
    return 1;
}

void RPN::Setup_calculator() {
    std::string op("+*-/");
    // cout<<this->sign<<std::endl; shows the whole argv[1]
    while (!mystack.empty())
        mystack.pop();

    for (size_t i = 0; i < sign.size(); i += 2) {
        if (std::isdigit(sign.at(i))){
            // cout<<"print "<<sign.at(i)<<std::endl;  //print 
            mystack.push(ConvertoInt(sign.at(i)));
        }
        else if (op.find(sign.at(i)) == std::string::npos || !performOperation(sign.at(i))) {
            std::cout << "error\n";
            exit(1);
        }
    }

    if (mystack.size() != 1) {
        std::cout << "error\n";
        exit(1);
    }

    std::cout << "Result: " << mystack.top() << "\n";
}
