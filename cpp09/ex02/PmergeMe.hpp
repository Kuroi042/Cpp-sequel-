
#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>

using namespace std;


class PmergeMe
{

private:
    vector<int> parsedVec;
    vector<int> BaseList;
    vector<int> sortedVector;
    deque<int> sorteDeque;
    double vectorTime;
    double dequeTime;
 

public:
template <typename T> 
    void Jhonson(T &data);
    // template <typename T>
 
    PmergeMe() {};
    void sortList();

    void parseArguments(char **argv, int argc);
    // PmergeMe &operator=(const PmergeMe &other);
    // PmergeMe(const PmergeMe &other);
    ~PmergeMe() {};
    void sortList(string elements);
};