/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:49:42 by adouay            #+#    #+#             */
/*   Updated: 2023/04/10 20:17:07 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde;
	
	horde = new Zombie[N];
	for (int i(0); i < N; i++)
		horde[i].setName(name);
	return horde;
}

