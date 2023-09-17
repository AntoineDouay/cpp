

#include "../include/BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {};
BitcoinExchange::~BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(std::string input) : _input(input) 
{
	get_data();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange & copy)
{
	*this = copy;
}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange & src)
{
	_data.clear();
	_input = src._input;
	std::map<std::string, float>::iterator it = src._data.begin();
	std::string str;
	float		f;
	for (; it != src._data.end(); it++)
	{
		str = it->first;
		f = it->second;
		_data[str] = f;
	}
	return *this;
}


BitcoinExchange::map_iterator	BitcoinExchange::right_key(std::string date)
{
	map_iterator it =_data.find(date);

	if (it != _data.end())
		return (it);
	
	it = _data.lower_bound(date);
	return ( it == _data.begin() || it == _data.end() ? it : --it);
}


void	BitcoinExchange::exchange()
{
	std::ifstream	file(_input.c_str());
	std::string		buffer;
	std::string		date;
	std::string		value;

	if (!file.is_open())
		throw ExchangeError("Error : could not open file");

	getline(file, buffer);

	if (buffer.compare("date | value"))
		throw ExchangeError("Error : need [date | value] on first line");
	
	while (getline(file, buffer))
	{
		try {
			date.assign(buffer, 0, 10);
			if (!parse_date(date))
					throw ExchangeError("Error: bad input => " + date);
			value = buffer.assign(buffer.begin() + 10, buffer.end());
			if (value.compare(0, 3, " | "))
				throw	ExchangeError("Format Error");
			value.erase(0,3);
			map_iterator it = right_key(date);
			double f_value = atof(value.c_str());
			if (f_value < 0 )
				throw	ExchangeError("Error: not a positive number.");
			if (f_value > 1000)
				throw	ExchangeError("Error: too large a number.");
			if (it == _data.end())
				throw	ExchangeError("Error: bad input => " + date);
			std::cout << it->first << " => " << f_value << " = " << GREEN << it->second * f_value  << WHITE << std::endl;
		}
		catch( ExchangeError & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	file.close();
}

bool	BitcoinExchange::parse_date(std::string date)
{
	if(date.size() != 10)
		return false;

	if (atol(date.c_str()) < 2009 || atol(date.c_str()) > 2022) // year
		return false;
	if (atol(date.c_str() + 5) < 1 || atol(date.c_str() + 5) > 12) // month
		return false;
	if (atol(date.c_str() + 8) < 1 || atol(date.c_str() + 8) > 31) // day
		return false;

	for (unsigned long i = 0; i < date.size(); i++)
	{
		if (!isdigit(date[i]))
		{
			if (!(date[i] == '-' && (i == 4 || i == 7)))
				return false;
		}
	}
	return true;
}

bool	BitcoinExchange::parse_value(std::string value)
{
	bool point = false;

	if (!value.size())
		return false;

	for (unsigned long i = 0; i < value.size(); i++)
	{
		if (!isdigit(value[i]))
		{
			if (value[i] == '.' && !point)
				point = true;
			else
				return false;
		}
	}
	return true;
}

void	BitcoinExchange::get_data()
{
	std::ifstream	file("data.csv");

	if (!file.is_open())
		throw ExchangeError("Error : could not open file");

	std::string line;
	std::string	date;
	std::string value;

	getline(file,line);

	if (line.compare("date,exchange_rate"))
		throw ExchangeError("Error : need [date,exchange_rate] on first line");

	while(getline(file, line))
	{
		date = line.substr(0, line.find(','));
		value = line.substr(line.find(',') + 1, line.size());

		if (!parse_date(date))
			throw ExchangeError("Error : date format need to be YYYY-MM-DD");
		if (!parse_value(value))
			throw ExchangeError("Error : of format in data.csv");

		_data.insert(std::make_pair(date, std::atof(value.c_str())));
	}

	//map_iterator it = _data.begin();

	// for(; it != _data.end(); it++)
	// 	std::cout << "clef : " << it->first << " valeur : " << it->second << std::endl; 
	file.close();
	
	return ;
}
