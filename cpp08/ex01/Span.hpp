#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <limits> // for std::numeric_limits

// template <typename T>
class Span
{

private:
    unsigned int N;
    std::vector<int> hh;

public:
    Span(unsigned int _N) : N(_N) {

                            };

    Span &operator=(const Span &other)
    {
        if (this != &other)
        {
            this->N = other.N;
            this->hh = other.hh;
        }
        return *this;
    }
    void addNumber(unsigned int i)
    {
        if (hh.size() > N)
        {
            throw outofbound();
        }
        else if (hh.size() < N)
            hh.push_back(i);
    };

    class outofbound : public ::std::exception
    {

    public:
        const char *what() const throw()
        {
            return "out of bound\n";
        };
    };

    void longestSpan()
    {

        vector<int> myvec = getVect();

        std::sort(myvec.begin(), myvec.end());

        int longestSpan = 0;
        std::vector<int>::iterator iter1 = myvec.begin();
        int first = *iter1;
        int max = 0;
        for (; iter1 != myvec.end(); iter1++)
        {
            max = -first + *(iter1);

            if (max > longestSpan)
            {
                longestSpan = max;
            }
        }

        cout << "longest span  == " << longestSpan << std::endl;
    }

    void shortSpan()
    {
        // int Short = 0;
        vector<int> myvec = getVect();
        std::sort(myvec.begin(), myvec.end());

        std::vector<int>::iterator iter1 = myvec.begin();
        unsigned int shortestSpan = std::numeric_limits<int>::max();

        for (; iter1 != myvec.end(); iter1++)
        {
            unsigned int min = *(iter1 + 1) - *iter1;
            if (min < shortestSpan)
            {
                shortestSpan = min;
            }
        }
        cout << "shortestSpan " << shortestSpan << std::endl;
    }

    size_t getSize()
    {
        return N;
    }
    vector<int> getVect()
    {
        return hh;
    }
};