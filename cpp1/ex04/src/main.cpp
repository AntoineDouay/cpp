/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:36:14 by adouay            #+#    #+#             */
/*   Updated: 2023/04/21 18:17:59 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	parseStr( std::string str, std::string to_find, std::string remplacement )
{
	std::size_t	index = 0;
	std::size_t	endIndex;
	std::string result;

	endIndex = str.find(to_find, index);
	if (endIndex == std::string::npos)
		return str;
	while (endIndex != std::string::npos)
	{
		result.append(str.substr(index, endIndex - index));
		result.append(remplacement);
		index = endIndex + to_find.size();
		endIndex = str.find(to_find, index);
	}
	result.append(str.substr(index, endIndex - index));
	return result; 
}

int	parseParams( std::string file, std::string s1, std::string s2)
{
	if (file.size() == 0 || s1.size() == 0|| s2.size() == 0)
		return 1;
	return 0;
}

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Sed need 3 params ./sed <filename> <s1> <s2> " << std::endl;
		return 0;
	}
	if (parseParams(av[1], av[2], av[3]))
		return 0;	
	
	std::ifstream	file;
	std::ofstream	newFile;
	std::string		str;
	
	std::string		replaceName(av[1]);
	replaceName += ".replace";
	
	file.open(av[1]);

	if (!file.good())
	{
		std::cout << "Error from file" << std::endl;
		return 0;
	}
	newFile.open(replaceName.c_str());
	if (!newFile.good())
	{
		file.close();
		return 0;
	}
	while (std::getline(file, str))
	{
		str = parseStr(str, av[2], av[3]);
		newFile << str << std::endl;
	}
	file.close();
	newFile.close();
	return 0;
}