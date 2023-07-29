
#include "iter.hpp"

int main()
{
    int array[3] = {3, 2, 4};
    std::string array2[3] = {"salut", "ca", "va"};
    iter(array, 3, speak<int>);
    iter(array2, 3, speak<std::string>);
    return 0;
}
