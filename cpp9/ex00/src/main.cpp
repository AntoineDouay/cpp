
#include "../include/BitcoinExchange.hpp"

int main()
{
	BitcoinExchange oui("test.txt");
	try{
		oui.exchange();
	}
	catch(BitcoinExchange::ExchangeError & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}