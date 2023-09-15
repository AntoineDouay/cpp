

#include "../include/BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {};
BitcoinExchange::~BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(std::string input) : _input(input) 
{
	get_data();
}

BitcoinExchange::map_iterator	BitcoinExchange::right_key(std::string date)
{
	map_iterator it =_data.find(date);

	if (it == _data.end())
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
		return;
	getline(file, buffer);
	if (buffer.compare("date | value"))
		return ;
	
	while (getline(file, buffer))
	{
		date.assign(buffer, 0, 10);
		if (!parse_date(date))
		{
			std::cout << "date error from exchange\n";
			return ;
		}
		value = date.assign(buffer.begin() + 10, buffer.end());

		if (value.compare(0, 3, " | "))
		{
			std::cout << "error format need | \n";
			return ;
		}
		value.erase(0,3);
		map_iterator it = right_key(date);
		double f_value = atof(value.c_str());
		if (f_value < 0)
			return ;
		if (f_value > 1000)
			return ;
		// std::cout << "cc\n";			// it renvoie end au lieux de marcher
		// if (it == _data.end())
		// 	return ;
		std::cout << "\033[32m" << it->second * f_value << "\033[32m" << std::endl;
	}
	file.close();
}

bool	BitcoinExchange::parse_date(std::string date)
{
	if(date.size() != 10)
	{
		std::cout << "error\n";
		return false;
	}

	if (atol(date.c_str()) < 2009 || atol(date.c_str()) > 2022) // year
		return false;
	if (atol(date.c_str() + 5) < 0 || atol(date.c_str() + 5) > 12) // month
		return false;
	if (atol(date.c_str() + 8) < 0 || atol(date.c_str() + 8) > 31) // day
		return false;

	for (unsigned long i = 0; i < date.size(); i++)
	{
		if (!isdigit(date[i]))
		{
			if (!(date[i] == '-' && (i == 4 || i == 7)))
			{
				std::cout << "error\n";
				return false;
			}
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
		return;

	std::string line;
	std::string	date;
	std::string value;

	getline(file,line);

	if (line.compare("date,exchange_rate"))
		return;

	while(getline(file, line))
	{
		date = line.substr(0, line.find(','));
		value = line.substr(line.find(',') + 1, line.size());

		if (!parse_date(date))
			return;
		if (!parse_value(value))
			return ;


		_data.insert(std::make_pair(date, std::atof(value.c_str())));
	}

	//map_iterator it = _data.begin();

	// for(; it != _data.end(); it++)
	// 	std::cout << "clef : " << it->first << " valeur : " << it->second << std::endl; 
	file.close();
	
	return ;
}
