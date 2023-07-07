
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

Character::Character()
{
    _name = "unkmow";
    for(int i = 0; i < 3; i++)
        _inventory[i] = NULL;
    _trash = NULL;
    _count = 0;
}

Character::Character( std::string const & name )
{
    _name = name;
    for(int i = 0; i < 3; i++)
        _inventory[i] = NULL;
    _trash = NULL;
    _count = 0;
}

Character::Character(const Character & copy )
{
    *this = copy;
}

Character&   Character::operator=( const Character & src )
{
    this->_name = src._name;
    for(int i = 0; i < 3; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
        if (!src._inventory[i])
            _inventory[i] = NULL;
        else if (src._inventory[i]->getType() == "ice")
            _inventory[i] = new Ice();
        else if (src._inventory[i]->getType() == "cure")
            _inventory[i] = new Cure();
    }
    if (_trash)
        delete _trash;
     if (!src._trash)
            _trash = NULL;
        else if (src._trash->getType() == "ice")
            _trash = new Ice();
        else if (src._trash->getType() == "cure")
            _trash = new Cure();
    
    return *this;
}

std::string const&  Character::getName( void ) const
{
    return _name;
}

void    Character::equip(AMateria* m)
{
    if (_count >= 4)
    {
        delete m;
        return ;
    }
    _inventory[_count] = m;
    _count++;
}
void    Character::unequip(int idx)
{
    if ((idx > 3 && idx < 0) || idx > _count)
        return ;
    if (_trash)
        delete  _trash;
    _trash = _inventory[idx];
    _count--;
    for(int i = 0; i < 4; i ++)
    {
        for(int j = i; j < 4; j++)
        {
            if (_inventory[j])
            {
                _inventory[i] = _inventory[j];
                break ;
            }
        }
    }
}
void    Character::use(int idx, Character& target)
{
    _inventory[idx]->use(target);
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    if (_trash)
        delete _trash;
}