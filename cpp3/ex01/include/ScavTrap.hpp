/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:17:48 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 13:17:50 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap : public ClapTrap{

	public : 
	
	ScavTrap( void );
	ScavTrap ( const std::string name );
	ScavTrap ( ScavTrap const & src );
	~ScavTrap( void );

	ScavTrap&	operator=( ScavTrap const & src );

    void    attack( const std::string& target );
	void	guardGate( void );

};

#endif