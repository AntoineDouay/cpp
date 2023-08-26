
#include "../include/Span.hpp"

int main()
{
	int n = 10;
	Span S1(n);

	try
	{
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
		S1.addNumber(7);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	S1.randomFill();
	S1.print();
	std::cout << "---" << std::endl;
	std::cout << S1.shortestSpan() << std::endl;
	std::cout << S1.longestSpan() << std::endl;

	try {
		Span test(1);
		//Span test(0);
		test.shortestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }