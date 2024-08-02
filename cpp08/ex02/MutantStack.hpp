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
    size_t capacity;

public:
    size_t getCpacity()
    {
        return capacity;
    }
    vector<int> getvec()
    {
        return stack;
    }
    size_t getSize()
    {
        return size;
    }
    MutantStack() : size(0), capacity(0) {

        cout<<"size in constractor = "<<size<<std::endl;
                cout<<"capacity in constractor = "<<capacity<<std::endl;

    };

    MutantStack &operator=(MutantStack &original)
    {
        if (this != &original)
        {
            this->size = original.size;
            this->stack = original.stack;
        }
        return *this;
    }

    // void add(int &newsize)
    // {
    //     static bool first = 0;
    //     if (first == 0)
    //     {
    //         first = 1;
    //         stack.resize(newsize);
    //         cout << "miaww " << stack.size() << std::endl;
    //         return;
    //     }

    //     else if (first)
    //     {
    //         newsize++;
    //         stack.resize(newsize);
    //         cout << "miaww 22 " << stack.size() << std::endl;
    //     }
    // }
    void setCapacity(size_t newcapacity)
    {
        capacity = newcapacity;
    }
    void setSize(size_t _size)
    {
        size = _size;
    };
    void push(int num)
    {

        stack.insert(stack.end(), num);
        size++;
        capacity++;
        // cout << "size in push = " << size << std::endl;
        // cout << "capacity in push= " << capacity<< std::endl;
    }

    void pop()
    {
        size  =  getSize();
        cout << "size before pop = " << size << std::endl;

        if (!getvec().size())
        {
            cout << "vector is empty\n";
            return;
        }
        else
        {
            size--;
        }
        cout << "size after pop = " << size << std::endl;

        cout << "capacity = " << capacity << std::endl;
    }
};