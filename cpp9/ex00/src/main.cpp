
#include "../include/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : could not open the file.\n";
		return 1;
	}

	BitcoinExchange oui(argv[1]);
	try{
		oui.exchange();
	}
	catch(BitcoinExchange::ExchangeError & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}