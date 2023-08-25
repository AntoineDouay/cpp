
#include "iter.hpp"

template<typename E>
void    print(E & element)
{
    std::cout << element << std::endl; 
}

int main()
{
    int array[3] = {3, 2, 4};
    std::string array2[3] = {"salut", "ca", "va"};

    iter(array, 3, print<int>);
    iter(array2, 3, print<std::string>);
    return 0;
}
