/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:05:13 by adouay            #+#    #+#             */
/*   Updated: 2023/05/15 18:05:15 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hp = 100;
    _energy_point = 50;
    _atk_dmg = 20;
    std::cout << "ScavTrap default constructor called\n";
    return ;
}

ScavTrap::ScavTrap( const std::string name ) : ClapTrap( name )
{
    _name = name;
    _hp = 100;
    _energy_point = 50;
    _atk_dmg = 20;
    std::cout << "ScavTrap name constructor called\n";
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap( src )
{
    *this = src;
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

void    ScavTrap::guardGate()
{
    std::cout << _name << " goes into guardGate mode \n";
    return ;
}

