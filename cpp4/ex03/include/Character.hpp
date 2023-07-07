#ifndef CHARACTER_HPP

# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter
{
    public:

    Character();
    Character(const std::string & name);
    Character(const Character & copy);
    ~Character();

    Character&  operator=(const Character & src);

    std::string const & getName() const;

    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, Character& target);

    private :

    std::string _name;
    AMateria*   _inventory[4];
    AMateria*   _trash;
    int         _count;
};

#endif