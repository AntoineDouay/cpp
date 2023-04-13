/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:34:36 by adouay            #+#    #+#             */
/*   Updated: 2023/04/11 18:54:00 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP

# define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	
	public : 

	HumanB( std::string name );
	HumanB( std::string name, Weapon &weapon );
	void	attack( void );
	void	setWeapon( Weapon &weapon);

	private :
	
	std::string _name;	
	Weapon *_weapon;
};

# endif