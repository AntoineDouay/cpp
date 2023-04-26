/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:11:17 by adouay            #+#    #+#             */
/*   Updated: 2023/04/21 17:08:22 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.h"

int	main( void )
{
	Zombie *n = newZombie("Tom");
	
	randomChump("Tim");
	n->announce();
	std::cout << "cc" << '\n';
	delete n;
	return 0;
}