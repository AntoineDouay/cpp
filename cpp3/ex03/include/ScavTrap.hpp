/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:07:36 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 16:38:42 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap : virtual public ClapTrap{

	public : 
	
	ScavTrap( void );
	ScavTrap ( const std::string name );
	ScavTrap ( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap&	operator=( ScavTrap const & src );

	void	attack( const std::string & src );
	void	guardGate( void );

};

#endif