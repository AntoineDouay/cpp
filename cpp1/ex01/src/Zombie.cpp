/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:41:05 by adouay            #+#    #+#             */
/*   Updated: 2023/04/10 20:21:03 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( std::string name) : _name(name)
{
}

Zombie::Zombie( void )
{
}

void	Zombie::setName( std::string name )
{
	_name = name;
	return ;
}


Zombie::~Zombie( void )
{
	std::cout << _name << " has been killed a second time " << '\n';
}

void	Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}