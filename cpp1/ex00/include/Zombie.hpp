/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:56:07 by adouay            #+#    #+#             */
/*   Updated: 2023/04/10 20:14:36 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	
	public :
	
	Zombie( std::string name );
	~Zombie( void );
	void	announce ( void ) const;
	
	private : 

	std::string _name;
};

#endif