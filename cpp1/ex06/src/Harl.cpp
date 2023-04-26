/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:04:46 by adouay            #+#    #+#             */
/*   Updated: 2023/04/26 15:48:15 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{
	_array[0] = &Harl::debug;
	_array[1] = &Harl::info;
	_array[2] = &Harl::warning;
	_array[3] = &Harl::error;
	return ;
}

void	Harl::debug()
{
	std::cout << "bonjour je te debug" << std::endl;
}
void	Harl::info()
{
	std::cout << "salut je t'informe" << std::endl;
}
void	Harl::warning()
{
	std::cout << "salut je suis le message de warning" << std::endl;
}
void	Harl::error()
{
	std::cout << "salut je suis le message d'erreur" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	
	while (level != array[i] && i < 4)
	{
		i++;
	}
	switch (i) {
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case 0 :
			debug();
		case 1 :
			info();
		case 2 :
			warning();
		case 3 :
			error();
	}	
	return ;
}
