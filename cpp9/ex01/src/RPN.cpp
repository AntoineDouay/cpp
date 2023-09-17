
#include "../include/RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(std::string list) : _str(list)
{
}

RPN::RPN(const RPN & copy)
{
	*this = copy;
}

RPN&	RPN::operator=(const RPN & src)
{
	_str = src._str;
	return *this;
}

void	RPN::solve()
{
	std::istringstream 		_iss(_str);
	std::stack<int>			_stack;
	std::string token;

	int	l_operand;
	int	r_operand;

	while(_iss >> token)
	{
		if(isdigit(token[0]) || (token[0] == '-' && isdigit(token[1])))
			_stack.push(atoi(token.c_str()));
		else
		{
			if (_stack.size() < 2)
			{
				std::cout << "error : impossible to calculate\n";
				return ;
			}
			r_operand = _stack.top();
			_stack.pop();
			l_operand = _stack.top();
			_stack.pop();
			switch(token[0])
			{
				case '+' :
					_stack.push(l_operand + r_operand);
					break;
				case '-' :
					_stack.push(l_operand - r_operand);
					break;
				case '/' :
					if (r_operand == 0)
					{
						std::cout << "error : divide by zero" << std::endl;
						return;
					}
					_stack.push(l_operand / r_operand);
					break;
				case '*' :
					_stack.push(l_operand * r_operand);
					break;
				default :
					std::cout << "error : unknow character \n";
					return;
			}
		}
	}
	if (_stack.size() != 1)
	{
		std::cout << "error : impossible to calculate\n";
		return ;
	}
	std::cout << _stack.top() << std::endl;
}

RPN::~RPN()
{
}