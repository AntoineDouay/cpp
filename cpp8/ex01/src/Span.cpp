
#include "../include/Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span & copy)
{
	*this = copy;
}

Span&	Span::operator=(const Span & src)
{
	_stock = src._stock;
	_n = src._n;
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (_stock.size() < static_cast<unsigned long>(_n))
		_stock.push_back(n);
}

int		Span::shortestSpan()
{
	if (_stock.size() == 0)
		throw EmptyArrayException();
	if (_stock.size() == 1)
		throw OneArrayException();
	std::vector<int> tmp = _stock;
	std::sort(tmp.begin(), tmp.end());
	long double span = std::numeric_limits<long double>::max();

	for (std::vector<int>::iterator it = tmp.begin(); it < (tmp.end() - 1); it++)
	{
		long double diff = abs(*(it+1) - *it);
		if (span > diff)
			span = diff;
	}

	return (span);
}

int		Span::longestSpan()
{
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
