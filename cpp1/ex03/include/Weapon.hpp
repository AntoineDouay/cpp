/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:34:33 by adouay            #+#    #+#             */
/*   Updated: 2023/04/21 17:58:34 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>

class Weapon {
	
	public :
	
	Weapon ( void );
	Weapon( std::string type );
	
	const std::string	&getType( void );
	void				setType( std::string name );
	
	private :
	
	std::string 		_type;
	
};

#endif