#pragma once
#include <iostream>
template <typename T>
class Array
{
private:
    T *arr;
    unsigned int size;

public:
    Array() : arr(nullptr), size(0) {}

    Array(unsigned int n) : arr(new T[n])
    {
        size = n;
    }

    Array &operator=(const Array &original)
    {
        if (this != &original)
        {
            delete []arr;
            size = original.size;
            arr = new T[size];
            for (unsigned int i = 0; i < size; i++)
            {
                arr[i] = original.arr[i];
            }
        }
        return *this;
    }

      Array(const Array& original) : arr(new T[original.size]), size(original.size) {
        for (unsigned int i = 0; i < size; ++i) {
            arr[i] = original.arr[i];
        }
    }

    ~Array()
    {
        delete[] arr;
    }
        T& operator[](unsigned int index) {
        if (index > size) {
            throw std::out_of_range("Array index out of bounds");
        }
        return arr[index];
    }

    const T& operator[](unsigned int index) const {
        if (index < size) {
            throw std::out_of_range("Array index out of bounds");
        }
        return arr[index];
    }

};