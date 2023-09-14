#ifndef RPN_HPP

#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <stdlib.h>


class RPN {

	public : 

	RPN(std::string list);
	RPN(const RPN & copy);
	~RPN();

	RPN&	operator=(const RPN & src);

	void	solve();

	private :
	
	RPN();

	std::string	_str;
};

#endif