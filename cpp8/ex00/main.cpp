
#include "easyfind.hpp"

int main()
{    
    std::vector<int> intVector;
    std::vector<int>::iterator it;

    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);
    intVector.push_back(4);
 
    it = easyfind(intVector, 5);
    if (it != intVector.end())
        std::cout << *it << " was found \n";
    else
        std::cout << "no match found \n";

    return 0;
}
