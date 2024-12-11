#include "PmergeMe.hpp"
#include <ctime>
#include <iomanip>
// dup
// negative
//

template <typename T>
void binaryInsertion(int num, T &data)
{
    typename T::iterator low, mid, high;

    low = data.begin();
    high = data.end();

    while (low < high)
    {
        mid = low + (high - low) / 2; // find the middle of input

        if (*mid < num)
            low = mid + 1;
        else
            high = mid;
    }

    data.insert(low, num);
}

void PmergeMe::parseArguments(char **argv, int argc)
{
    string storedArgs;
    std::stringstream ss;

    int i = 1;

    while (i < argc)
    {
        ss << argv[i];
        while (ss >> storedArgs) // big while
        {

            if (storedArgs.empty())
            {
                cout << "arguments empty\n";
                exit(1);
            }
            for (size_t i = 0; i < storedArgs.length(); i++)
            {
                if (storedArgs.at(i) == '-')
                {
                    cout << "negative value\n";
                    exit(1);
                }
                else if (storedArgs.at(i) == '+' && isdigit(storedArgs.at(i + 1)))
                {
                    continue;
                }

                else if (!std::isdigit(storedArgs.at(i)))
                {
                    cout << "arguments |" << storedArgs.at(i) << "| is not digit\n";
                    exit(1);
                }
            }
            this->parsedVec.push_back(std::atoi(storedArgs.c_str()));
        }
        ss.clear();
        i++;
    }
    // vector<int>::iterator it  =  parsedVec.begin();
    //     for(;it!= parsedVec.end(); it++)
    //         {
    //             cout<<*it<<std::endl;
    //         }
}
template <typename T>
void sortingPairs(T &input)
{
    int tmp;
    int size = input.size();
    if (size % 2 != 0) // if odd decrement by 1;
        size--;
    for (int i = 0; i < size; i += 2) // increment bjouj
    {
        if (input.at(i) > input.at(i + 1))
        {
            tmp = input.at(i);
            input.at(i) = input.at(i + 1);
            input.at(i + 1) = tmp;
        }
    }
}

template <typename T>
void PmergeMe::Jhonson(T &input)
{
    T pending;
    sortingPairs(input);
    if (input.size() % 2 != 0) // odd case add last element to pending container
    {
        pending.push_back(input.back());
        input.pop_back();
    }
    for (int i = input.size() - 2; i > 0; i -= 2)
    {
        pending.push_back(*(input.begin() + i)); // second element of each pairs
        input.erase(input.begin() + i);
    }
    if (input.size() > 2)
        Jhonson(input);

    for (size_t i = 0; i < pending.size(); i++)
        binaryInsertion<T>(pending.at(i), input);
}



void PmergeMe::sortList()
{
    std::clock_t startTime, stopTime;

    this->sortedVector.reserve(parsedVec.size());
    for (size_t i = 0; i < parsedVec.size(); i++)
    {
        sortedVector.push_back(parsedVec.at(i));
        sorteDeque.push_back(parsedVec.at(i));
    }

    // vector<int>::iterator it = sortedVector.begin();
    // for (; it != sortedVector.end(); it++)
    // {
    //     cout << *it << std::endl;
    // }
    startTime = std::clock();
    Jhonson(sortedVector);
    stopTime = std::clock();
    this->vectorTime = static_cast<double>(stopTime - startTime) / CLOCKS_PER_SEC;

    startTime = std::clock();
    Jhonson(sorteDeque);
    stopTime = std::clock();
    this->dequeTime = static_cast<double>(stopTime - startTime) / CLOCKS_PER_SEC;
}

//   void sortList(string elements) {}


void PmergeMe::printing()
{
    cout << "before sorting \n";
    for (size_t i = 0; i < this->parsedVec.size(); i++)
    {
        cout << parsedVec.at(i) << " " << std::endl;
    }
      cout << "After sorting \n";
    for (size_t i = 0; i < this->parsedVec.size(); i++)
    {
         cout <<  sortedVector.at(i)<<" " << std::endl;
    }

        cout<<"vector time = "<<    this->vectorTime<<" us"<<std::endl;
        std::cout << std::fixed << std::setprecision(6) << "Elapsed time: " << this->dequeTime << " seconds" << std::endl;
}
