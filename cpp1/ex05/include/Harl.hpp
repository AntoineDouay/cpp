/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:05:20 by adouay            #+#    #+#             */
/*   Updated: 2023/04/13 18:53:18 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	public :

	Harl();
	void complain( std::string level );

	private :

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
	void	(Harl::*_array[4])();
};

#endif