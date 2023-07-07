#include "../include/Ice.hpp"

Ice::Ice()
{
    _type = "ice";
}

Ice::Ice( const Ice & copy )
{
    *this = copy;
}

Ice&    Ice::operator=(const Ice & src )
{
    _type = src._type;
}

AMateria*    Ice::clone() const
{
    AMateria*   newIce = new Ice();
    return newIce;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice at " << target.getName() << " *\n";
    return ;
}

Ice::~Ice()
{
}