#pragma once
#include <iostream>
#include <cstdint>
 

struct Data
{
};

class Serializer
{
public:
    static uintptr_t serialize(Data *ptr);

    static Data *deserialize(uintptr_t raw);
};
