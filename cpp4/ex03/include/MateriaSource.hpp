#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
    
    MateriaSource();
    MateriaSource(const MateriaSource & copy);
    ~MateriaSource();

    MateriaSource&  operator=(const MateriaSource & src);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

    private :

    AMateria*   _learned[4];
};

#endif