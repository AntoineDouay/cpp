
#include "../include/Span.hpp"

int main()
{
	int n = 10;
	Span S1(n);
	// std::vector<int> test;

	// test.resize(10);

	// std::cout << test.size() << std::endl;
	srand((unsigned) time(NULL));
	for (int i = 0 ; i < n; i++)
		S1.addNumber(rand() % 100);
	S1.print();
	std::cout << "---" << std::endl;
	std::cout << S1.shortestSpan() << std::endl;
	std::cout << S1.longestSpan() << std::endl;
	return 0;
}