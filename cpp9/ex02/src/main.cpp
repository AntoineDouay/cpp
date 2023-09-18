
#include "../include/PmergeMe.hpp"

int main(int argc, char** argv)
{

	std::string	_input;

	clock_t	time_vect;
	clock_t	time_deque;

	std::vector<int>	result;

	for (int i = 1; i < argc; i++)
	{
		_input.append(argv[i]);
		_input.append(" ");
	}

	try
	{
		PmergeMe	oui(_input);
		time_vect = clock();
		oui.sort_vect();
		time_vect = clock() - time_vect;

		time_deque = clock();
		oui.sort_deque();
		time_deque = clock() - time_deque;
		result = oui.get_result();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	


	std::cout << "before : " << _input << std::endl;
	std::cout << "after : ";
	for (std::vector<int>::iterator it = result.begin(); it != result.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "std::vect take " << (float) time_vect/CLOCKS_PER_SEC*1000 << " miliseconds\n";
	std::cout << "std::deque take " << (float) time_deque/CLOCKS_PER_SEC*1000 << " miliseconds\n";
 	return 0;
}