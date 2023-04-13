/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:04:46 by adouay            #+#    #+#             */
/*   Updated: 2023/04/13 19:03:16 by adouay           ###   ########.fr       */
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !";
}
void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
	std::cout << "enough bacon in my burger ! If you did, I wouldn’t be asking for more !";
}
void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming";
	std::cout << "for years whereas you started working here since last month.";
}
void	Harl::error()
{
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level )
{
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i(0); i < 4; i++)
	{
		if (level == array[i])
			(this->*_array[i])();
	}
	return ;
}
