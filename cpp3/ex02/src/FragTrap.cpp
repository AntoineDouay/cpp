/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:30:39 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 16:20:41 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() 
{
    _hp = 100;
    _energy_point = 100;
    _atk_dmg = 30;
    std::cout << "FragTrap default constructor called\n";
    return ;
}

FragTrap::FragTrap( const std::string name ) : ClapTrap( name )
{
    _hp = 100;
    _energy_point = 100;
    _atk_dmg = 30;
    std::cout << "FragTrap name constructor called\n";
    return ;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap( src )
{
    std::cout << "FragTrap copy constructor called\n";
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
    return ;
}

FragTrap&   FragTrap::operator=( FragTrap const & src)
{
    _name = src._name;
    _hp = src._hp;
    _energy_point = src._energy_point;
    _atk_dmg = src._atk_dmg;
    return *this;
}

void    FragTrap::highFivesGuys()
{
	if (_hp <= 0)
	{
		std::cout  << "FragTrap " << this->_name << " is dead\n";
		return;
	}
    std::cout << "FragTrap " << _name << " give me a Highfive !!\n";
}

