/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:48:39 by adouay            #+#    #+#             */
/*   Updated: 2023/04/21 17:22:59 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main ( void )
{

	int	n = 7;
	Zombie *horde = zombieHorde(n, "SAM");

	for (int i(0); i < n; i++)
	{
		std::cout << "Zombie " << i << ": ";
		horde[i].announce();
	}	
	delete [] horde;
	return 0;
}