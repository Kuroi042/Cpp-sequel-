#include <iostream>
#include <cstdint>

struct Data
{
};

class Serializer
{
public:
    static uintptr_t serialize(Data *ptr)
    {
        return reinterpret_cast<uintptr_t>(ptr);
    }
    static Data *deserialize(uintptr_t raw)
    {
        return reinterpret_cast<Data *>(raw);
    }
};

int main()
{

    Data *data = new Data();

    uintptr_t val = Serializer::serialize(data);
    std::cout << "value: " << data << std::endl;

    std::cout << "Serialized value: " << val << std::endl;
    std::cout << "deserialize value of Val : "<< Serializer::deserialize(val) << std::endl;
}