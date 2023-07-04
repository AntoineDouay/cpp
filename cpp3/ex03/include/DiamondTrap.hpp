/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:07:30 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 16:32:00 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {

	public : 
	
	DiamondTrap( void );
	DiamondTrap ( const std::string name );
	DiamondTrap ( DiamondTrap const & src );
	~DiamondTrap( void );

	DiamondTrap&	operator=( DiamondTrap const & src );

    void WhoAmI( void );

    private : 

    std::string _name;
};

#endif