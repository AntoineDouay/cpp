/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:04:49 by adouay            #+#    #+#             */
/*   Updated: 2023/04/26 15:23:06 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main( int ac, char* av[] )
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "need one argument" << std::endl;
		return 0;
	}

	harl.complain(av[1]);

	return 0;
}