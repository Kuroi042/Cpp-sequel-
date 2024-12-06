#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
 #include <limits> // for std::numeric_limits

class Span
{

private:
    unsigned int N;
    std::vector<int> hh;
public:
    Span(unsigned int _N);
    ~Span();
   Span& operator=(const Span &other);
    Span(const Span &other);

    void addNumber(int i);
    class outofbound : public ::std::exception
    {
    public:
        const char *what() const throw()
        {
            return "out of bound\n";
        };
    };
    int  longestSpan();
    int shortestSpan();
    unsigned int getSize();
    std::vector<int> &getVect();
};
