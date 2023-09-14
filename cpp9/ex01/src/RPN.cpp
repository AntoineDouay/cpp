
#include "../include/RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(std::string list) : _iss(list)
{
}

RPN::RPN(const RPN & copy)
{
}

void	RPN::solve()
{
	std::string token;

	int	l_operand;
	int	r_operand;

	while(_iss >> token)
	{
		if(isdigit(token[0]) || (token[0] == '-' && isdigit(token[1])))
			_stack.push(atoi(token.c_str()));
		else if (token[0] == '+')
		{
			r_operand = _stack.top();
			_stack.pop();
			l_operand = _stack.top();
			_stack.pop();
			_stack.push(l_operand + r_operand);
		}
		else if (token[0] == '-')
		{
			r_operand = _stack.top();
			_stack.pop();
			l_operand = _stack.top();
			_stack.pop();
			_stack.push(l_operand - r_operand);
		}
		else if (token[0] == '*')
		{
			r_operand = _stack.top();
			_stack.pop();
			l_operand = _stack.top();
			_stack.pop();
			_stack.push(l_operand * r_operand);
		}
		else if (token[0] == '/')
		{
			r_operand = _stack.top();
			_stack.pop();
			l_operand = _stack.top();
			_stack.pop();
			_stack.push(l_operand / r_operand);
		}
	}
	std::cout << _stack.top();
}

RPN::~RPN()
{
}