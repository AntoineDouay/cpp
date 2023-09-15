#ifndef BITCOINEXCHANGE_HPP

# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <cstdlib>

class BitcoinExchange{

	public :

	BitcoinExchange(std::string input);
	BitcoinExchange(const BitcoinExchange & copy);
	~BitcoinExchange();

	BitcoinExchange&	operator=(const BitcoinExchange & src);

	void	get_data();
	void	exchange();
	bool	parse_date(std::string date);
	bool	parse_value(std::string value);

	typedef std::map<std::string, float>::iterator map_iterator;

	map_iterator	right_key(std::string date);

	private :

	BitcoinExchange();

	std::string _input;
	std::map<std::string, float> _data;
};

#endif