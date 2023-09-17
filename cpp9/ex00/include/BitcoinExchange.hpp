#ifndef BITCOINEXCHANGE_HPP

# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <exception>
#include <sstream>
#include <cstdlib>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define WHITE "\033[0m"


class BitcoinExchange{

	public :

	BitcoinExchange(std::string input);
	BitcoinExchange(BitcoinExchange & copy);
	~BitcoinExchange();

	BitcoinExchange&	operator=(BitcoinExchange & src);

	void	get_data();
	void	exchange();
	bool	parse_date(std::string date);
	bool	parse_value(std::string value);

	typedef std::map<std::string, float>::iterator map_iterator;

	map_iterator	right_key(std::string date);

	class ExchangeError{
		public :
		ExchangeError(const std::string & message) : _message(message) {};

		const char* what() const throw() {return _message.c_str();}

		private :
		std::string _message;
	};

	private :

	BitcoinExchange();

	std::string _input;
	std::map<std::string, float> _data;
};

#endif