
#ifndef SPAN_HPP

#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <stdlib.h>
#include<time.h>


class Span{

	public :

	Span(unsigned int n);
	Span(const Span & copy);
	~Span();

	Span& operator=(const Span & src);

	void	randomFill();
	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();	
	
	void	print();

	class EmptyArrayException : public std::exception{
		virtual const char* what() const throw() {return "Empty Array";}
	};

	class OneArrayException : public std::exception{
		virtual const char* what() const throw() {return "One Array";}
	};

	class FullArrayException : public std::exception{
		virtual const char* what() const throw() {return "Array is full";}
	};

	private :

	Span();

	std::vector<int> _stock;
	int				 _max;
	int				 _fill;
};

#endif