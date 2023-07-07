#ifndef AMATERIA_HPP

# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria{
    public :

    AMateria( void );
    AMateria(std::string const & type); 
    AMateria( const AMateria & copy );
    ~AMateria( void );

    AMateria&   operator=(const AMateria & src);

    std::string const & getType() const; //Returns the materia type

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

    protected :

    std::string _type;  
};

#endif