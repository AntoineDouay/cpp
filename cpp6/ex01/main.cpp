
#include "Data.hpp"

uintptr_t   serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*       deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data    c1;

    c1.data = "salut";
    c1.n = 1324;

    std::cout << "--- avant reinterpret_cast ---\n";
    std::cout << "adresse de c1 :" << &c1 << std::endl;
    std::cout << "valeur de c1.data :" << c1.data << std::endl;
    std::cout << "valeur de c1.n :" << c1.n << std::endl;
    std::cout << "------------------------------\n";
    
    uintptr_t   tmp = serialize(&c1);
    Data*        c2  = deserialize(tmp);  
    
    std::cout << "--- apres reinterpret_cast ---\n";
    std::cout << "adresse de c2 :" << c2 << std::endl;
    std::cout << "valeur de c2.data :" << c2->data << std::endl;
    std::cout << "valeur de c2.n :" << c2->n << std::endl;
    std::cout << "------------------------------\n";return 0;
}