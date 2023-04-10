/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:41:40 by adouay            #+#    #+#             */
/*   Updated: 2023/04/10 20:20:51 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class Zombie {
	
	public :
	
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );
	void	setName( std::string name );
	void	announce ( void ) const;
	
	private : 

	std::string _name;
	
};

#endif