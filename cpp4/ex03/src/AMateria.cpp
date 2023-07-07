
#include "../include/AMateria.hpp"

AMateria::AMateria()
{
    _type = "unkmow";
}

AMateria::AMateria( std::string const & type )
{
    _type = type;
}

AMateria::AMateria(const AMateria & copy )
{
    *this = copy;
}

AMateria&   AMateria::operator=( const AMateria & src )
{
    this->_type = src._type;
    return *this;
}

std::string const&  AMateria::getType( void ) const
{
    return _type;
}

void    AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria::~AMateria()
{
}