#ifndef ICE_HPP

# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria{
    public :

    Ice( void );
    Ice( const Ice & copy );
    ~Ice( void );

    Ice&   operator=(const Ice & src);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif