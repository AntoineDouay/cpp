
#include "easyfind.hpp"

int main()
{    
    std::vector<int> intVector;
    std::vector<int>::iterator it;

	std::list<int> intlist;
    std::list<int>::iterator it1;

    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);
    intVector.push_back(4);
 
	intlist.push_back(1);
    intlist.push_back(2);
    intlist.push_back(3);
    intlist.push_back(4);

    it = easyfind(intVector, 1);
    if (it != intVector.end())
        std::cout << *it << " was found \n";
    else
	{
        std::cout << "no match found \n";
	}

	it1 = easyfind(intlist, 2);
    if (it1 != intlist.end())
	{
        std::cout << *it1 << " was found \n";
	}
    else
        std::cout << "no match found \n";

    return 0;
}
