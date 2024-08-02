#include "MutantStack.hpp"

int main()
{
    MutantStack stack;
    std::vector<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test.pop_back();


    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.pop();
    // stack.getvec().pop_back();
    for (size_t i = 0; i < stack.getvec().size(); i++)
    {
        cout <<"stack  "<< stack.getvec()[i] << std::endl;
    }
    // cout<<"\n";
    //     for (size_t i = 0; i < test.size(); i++)
    // {
    //     cout <<"test"<< test[i] << std::endl;
    // }

    cout << "stack capicity == " << stack.getvec().capacity() << std::endl;
    cout << "stack size == " << stack.getSize()<< std::endl;

    std::cout << "test Capacity: " << test.capacity() << std::endl; // Output: Capacity: 2 (initially, but can be larger)
        std::cout << " test size: " << test.size() << std::endl; // Output: Capacity: 2 (initially, but can be larger)

}

//     int main()
// {
// // MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }