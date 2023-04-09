/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:48:49 by adouay            #+#    #+#             */
/*   Updated: 2023/04/09 18:19:12 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.h"

std::string	TroncString(std::string str)
{
	std::string	result;
	
	result = str.substr(0,10);
	if (str.size() > 10)
		result[9] = '.';
	return result;
}

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	cmd;

	std::cin >> cmd;
	while (cmd.compare("EXIT") != 0)
	{
		if (cmd.compare("SEARCH") == 0)
			PhoneBook.SearchContact();
		if (cmd.compare("ADD") == 0)
			PhoneBook.AddContact();
		std::cin >> cmd;
	}
	return(0);
}