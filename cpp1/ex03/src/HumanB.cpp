/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:34:50 by adouay            #+#    #+#             */
/*   Updated: 2023/04/11 18:56:23 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
}

HumanB::HumanB( std::string name, Weapon &weapon ) : _name(name), _weapon(&weapon)
{
}


void	HumanB::attack ( void )
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon &weapon)
{
	_weapon = &weapon;
}