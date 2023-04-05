/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:48:49 by adouay            #+#    #+#             */
/*   Updated: 2023/04/05 20:28:55 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	cmd;

	std::cin >> cmd;
	while (cmd.compare("EXIT") != 0)
	{
		if (cmd.compare("SEARCH") == 0)
			PhoneBook.search();
		if (cmd.compare("ADD") == 0)
			PhoneBook.add();
		std::cin >> cmd;
	}
	PhoneBook.exit();
	return(0);
}