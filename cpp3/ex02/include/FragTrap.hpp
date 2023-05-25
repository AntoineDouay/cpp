#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class FragTrap : public ClapTrap{

	public : 
	
	FragTrap( void );
	FragTrap ( const std::string name );
	FragTrap ( FragTrap const & src );
	~FragTrap( void );

	FragTrap&	operator=( FragTrap const & src );

    void highFivesGuys( void );
};

#endif