/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:05:05 by adouay            #+#    #+#             */
/*   Updated: 2023/05/15 18:16:32 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hp(100), _energy_point(50), _atk_dmg(20)
{
    std::cout << "Constructor called\n";
}

ClapTrap::ClapTrap ( const std::string name )
{
    std::cout << "Constructor with name called\n";
    _name = name;
    _hp = 100;
    _energy_point = 50;
    _atk_dmg = 20;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
    std::cout << "Copy Constructor called\n";
    *this = src;
    return ;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor Called \n";
}

ClapTrap&   ClapTrap::operator=( ClapTrap const &src )
{
    _name = src._name;
    _hp = src._hp;
    _energy_point = src._energy_point;
    _atk_dmg = src._atk_dmg;
    return *this;
}

void    ClapTrap::attack ( const std::string& target )
{
	if (_energy_point <= 0)
	{
		std::cout << this->_name << " has no energy left\n";
		return;
	}
	if (_hp <= 0)
	{
		std::cout << this->_name << " is dead\n";
		return;
	}
	_energy_point--;
    std::cout << _name << " attack " << target << ", causing " << _atk_dmg << " points of dammage !\n";
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << _name << "has been hit by an attack dealing " << amount << " damage\n";
	_hp -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
	if (_energy_point <= 0)
	{
		std::cout << this->_name << " has no energy left\n";
	}
	if (_hp <= 0)
	{
		std::cout << this->_name << " is dead\n";
		return;
	}
	_energy_point--;
	_hp += amount;
    std::cout << _name << " has been repaired by " << amount << " point(s)\n";
}
