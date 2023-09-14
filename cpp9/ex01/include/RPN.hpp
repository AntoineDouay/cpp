#ifndef RPN_HPP

#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>

class RPN {

	public : 

	RPN(std::string list);
	RPN(const RPN & copy);
	~RPN();

	RPN&	operator=(const RPN & src);

	void	solve();

	private :
	
	RPN();

	std::istringstream 		_iss;
	std::stack<int>			_stack;
};

#endif