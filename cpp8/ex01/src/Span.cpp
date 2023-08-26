
#include "../include/Span.hpp"

Span::Span(unsigned int n) : _max(n), _fill(n)
{
	std::vector<int> tmp(n, 0);
	_stock = tmp;
}

Span::Span(const Span & copy)
{
	*this = copy;
}

Span&	Span::operator=(const Span & src)
{
	_stock = src._stock;
	_max = src._max;
	_fill = src._fill;
	return *this;
}

Span::~Span()
{
}


void	Span::randomFill()
{
	srand((unsigned) time(NULL));
	std::vector<int>::iterator it = _stock.begin();
	std::vector<int>::iterator ite = _stock.end();
	for (; it != ite; it++)
		*it = (rand() % 100);
}

void	Span::addNumber(int n)
{
	if (_fill == 0)
		throw FullArrayException();
	_stock[_max - _fill] = n;
	_fill--;
}

int		Span::shortestSpan()
{
	if (_stock.size() == 0)
		throw EmptyArrayException();
	if (_stock.size() == 1)
		throw OneArrayException();
	std::vector<int> tmp = _stock;
	std::sort(tmp.begin(), tmp.end());
	long double span = tmp[1] - tmp[0];

	for (std::vector<int>::iterator it = tmp.begin(); it < (tmp.end() - 1); it++)
	{
		long double diff = abs(*(it+1) - *it);
		if (diff < span)
			span = diff;
	}

	return (span);
}

int		Span::longestSpan()
{
	if (_stock.size() == 0)
		throw EmptyArrayException();
	if (_stock.size() == 1)
		throw OneArrayException();
	std::vector<int>::iterator min = min_element(_stock.begin(), _stock.end());
	std::vector<int>::iterator max = max_element(_stock.begin(), _stock.end());

	return (*max - *min);
}

void	Span::print()
{
	std::vector<int>::iterator it;

	it = _stock.begin();

	while (it != _stock.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
}
