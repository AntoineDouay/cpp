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