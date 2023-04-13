/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:34:39 by adouay            #+#    #+#             */
/*   Updated: 2023/04/11 18:53:57 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP

# define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	
	public : 

	HumanA( std::string name, Weapon &weapon );
	void	attack( void );

	private :
	
	std::string _name;
	Weapon		&_weapon;
};

# endif