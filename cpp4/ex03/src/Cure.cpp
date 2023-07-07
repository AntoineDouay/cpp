#include "../include/Cure.hpp"

Cure::Cure()
{
    _type = "Cure";
}

Cure::Cure( const Cure & copy )
{
    *this = copy;
}

Cure&    Cure::operator=(const Cure & src )
{
    _type = src._type;
}

AMateria*    Cure::clone() const
{
    AMateria*   newCure = new Cure();
    return newCure;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
    return ;
}

Cure::~Cure()
{
}