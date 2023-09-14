#include "../include/RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "error : usage ./RPN [operation] \n";
		return 1;
	}
	RPN oui(argv[1]);
	oui.solve();
	return 0;
}