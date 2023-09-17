
#include "../include/PmergeMe.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Error : format need to be ./PmergeMe [list]\n";
		return 1;
	}

	PmergeMe	oui(argv[1]);
	oui.sort_vect();
	return 0;
}