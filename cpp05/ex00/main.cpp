#include "Bureaucrat.hpp"


int main() {
    try {
        Bureaucrat br("charaf", 11);
            br.increment();
            br.decrement();
        std::cout<<br<<std::endl;



    } catch(const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
