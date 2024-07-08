
#include "Serialization.hpp"

int main()
{

    Data *data = new Data();

    uintptr_t val = Serializer::serialize(data);
    std::cout << "value: " << data << std::endl;

    std::cout << "deserialize value of Val : "<< Serializer::deserialize(val) << std::endl;
    std::cout << "Serialized value: " << val << std::endl;
}