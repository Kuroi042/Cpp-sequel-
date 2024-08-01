#pragma once
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
class MutantStack
{

private:
    vector<int> stack;
    size_t size;

public:
    vector<int> getvec()
    {
        return stack;
    }
    MutantStack() : size(0) {};

    // Array &operator=(const Array &original)
    // {
    //     if (this != &original)
    //     {
    //         delete []arr;
    //         size = original.size;
    //         arr = new T[size];
    //         for (unsigned int i = 0; i < size; i++)
    //         {
    //             arr[i] = original.arr[i];
    //         }
    //     }
    //     return *this;
    // }

    MutantStack &operator=(MutantStack &original)
    {
        if (this != &original)
        {
            this->size = original.size;
            this->stack = original.stack;
        }
        return *this;
    }

    void add(int &newsize)
    {
        bool first = 0;
        if (newsize && first == 0)
        {
            first = 1;
            stack.resize(newsize);
        }
        if (first == 1)
        {
            newsize++;
            stack.resize(newsize);
            cout << "miaww " << stack.size() << std::endl;
        }
    }
    void push()
    {
        int newo = 1;
        add(newo);
        add(newo);

        add(newo);

        cout << "stack size == " << stack.size() << std::endl;
    }
};