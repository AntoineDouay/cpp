/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:05:05 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 14:08:45 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout << "ClapTrap default Constructor called\n";
    _name = "unknow";
    _hp = 10;
    _energy_point = 10;
    _atk_dmg = 0;
}

ClapTrap::ClapTrap ( const std::string name )
{
    std::cout << "ClapTrap Constructor with name called\n";
    _name = name;
    _hp = 10;
    _energy_point = 10;
    _atk_dmg = 0;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
    std::cout << "ClapTrap Copy Constructor called\n";
    *this = src;
    return ;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap Destructor Called \n";
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
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead\n";
		return;
	}
	if (_energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left\n";
		return;
	}
	_energy_point--;
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _atk_dmg << " point(s) of dammage !\n";
}

void    ClapTrap::beRepaired( unsigned int amount )
{
	if (_hp <= 0)
	{
		std::cout <<  "ClapTrap " << this->_name << " is dead\n";
		return;
	}
	if (_energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left\n";
		return ; 
	}
	_energy_point--;
	_hp += amount;
    std::cout << "ClapTrap "<< _name << " has been repaired by " << amount << " point(s)\n";
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << "ClapTrap " << _name << " has been hit by an attack dealing " << amount << " damage(s)\n";
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}
