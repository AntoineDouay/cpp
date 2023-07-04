/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:13:50 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 14:16:03 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    _hp = 100;
    _energy_point = 50;
    _atk_dmg = 30;
    std::cout << "DiamondTrap default constructor called\n";
    return ;
}

DiamondTrap::DiamondTrap( const std::string name ) : ClapTrap( name + "_clap_name"), ScavTrap( name ), FragTrap( name )
{
    _name = name;
    _hp = 100;
    _energy_point = 50;
    _atk_dmg = 30;
    std::cout << "DiamondTrap name constructor called\n";
    return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src) : ClapTrap( src ), ScavTrap( src ), FragTrap( src )
{
    *this = src;
    std::cout << "DiamondTrap copy constructor called\n";
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
    return ;
}

DiamondTrap&   DiamondTrap::operator=( DiamondTrap const & src)
{
    _name = src._name;
    _hp = src._hp;
    _energy_point = src._energy_point;
    _atk_dmg = src._atk_dmg;
    return *this;
}

void    DiamondTrap::WhoAmI()
{
    std::cout << " WHO AM I ?? \n";
    std::cout << "My name is " << _name << " !! \n";
    std::cout << "My grandfather name is " << ClapTrap::_name << " !! \n";
    return ;
}