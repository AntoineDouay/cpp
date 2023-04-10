/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:48:39 by adouay            #+#    #+#             */
/*   Updated: 2023/04/10 20:22:36 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main ( void )
{
	Zombie *horde = zombieHorde(4, "SAM");

	for (int i(0); i < 4; i++)
	{
		std::cout << "Zombie " << i << ": ";
		horde[i].announce();
	}	
	delete [] horde;
	return 0;
}