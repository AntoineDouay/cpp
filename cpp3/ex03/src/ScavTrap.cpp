/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:05:13 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 16:31:47 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    _hp = 100;
    _energy_point = 50;
    _atk_dmg = 20;
    std::cout << "ScavTrap default constructor called\n";
    return ;
}

ScavTrap::ScavTrap( const std::string name ) : ClapTrap( name )
{
    _hp = 100;
    _energy_point = 50;
    _atk_dmg = 20;
    std::cout << "ScavTrap name constructor called\n";
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap( src )
{
    std::cout << "ScavTrap copy constructor called\n";
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
    return ;
}

ScavTrap&   ScavTrap::operator=( ScavTrap const & src)
{
    _name = src._name;
    _hp = src._hp;
    _energy_point = src._energy_point;
    _atk_dmg = src._atk_dmg;
    return *this;
}

void	ScavTrap::attack ( const std::string & src )
{
	if (_hp <= 0)
	{
		std::cout <<  "ScavTrap " << this->_name << " is dead\n";
		return;
	}
	if (_energy_point <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy left\n";
		return;
	}
	_energy_point--;
	std::cout << "ScavTrap " << _name << " attack by " << _atk_dmg << " hp " << src << std::endl;
}

void    ScavTrap::guardGate()
{
	if (_hp <= 0)
	{
		std::cout  << "ScavTrap " << this->_name << " is dead\n";
		return;
	}
    std::cout << "ScavTrap " << _name << " goes into guardGate mode \n";
    return ;
}
