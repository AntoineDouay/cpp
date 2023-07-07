#ifndef CURE_HPP

# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
    public :

    Cure( void );
    Cure( const Cure & copy );
    ~Cure( void );

    Cure&   operator=(const Cure & src);

    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif