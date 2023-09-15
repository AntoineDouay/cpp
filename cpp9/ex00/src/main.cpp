
#include "../include/BitcoinExchange.hpp"

int main()
{
	BitcoinExchange oui("test.txt");
	oui.exchange();
	std::cout << '\n';

	// std::ifstream	file("data.csv");

	// if (!file.is_open())
	// 	return ;

	// std::string line;
	// std::string	date;
	// std::string value;
	// while(getline(file, line))
	// {
	// 	date = line.substr(0, line.find(','));
	// 	value = line.substr(line.find(',') + 1, line.size());
	// 	_data.insert(std::make_pair(date, std::atof(value.c_str())));
	// 	std::cout << line << std::endl;
	// }

	// // std::map<std::string, float>::iterator it = _data.begin();

	// for(; it != datacsv.end(); it++)
	// 	std::cout << "clef : " << it->first << " valeur : " << it->second << std::endl; 
	return 0;
}