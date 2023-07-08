/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:34:33 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:34:35 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

Character::Character()
{
    _name = "unkmow";
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    _trash = NULL;
    _count = 0;
}

Character::Character( std::string const & name )
{
    _name = name;
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    _trash = NULL;
    _count = 0;
}

Character::Character(const Character & copy )
{
	_name = "unkmow";
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    _trash = NULL;
    _count = 0;
    *this = copy;
}

Character&   Character::operator=( const Character & src )
{
    this->_name = src._name;
	_count = src._count;
    for(int i = 0; i < 4; i++)
    {
        delete _inventory[i];
		_inventory[i] = NULL;

        if (src._inventory[i] != NULL)
			_inventory[i] = src._inventory[i]->clone();
    }

    delete _trash;
	_trash = NULL;

     if (src._trash != NULL)
			_trash = src._trash->clone();
			
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
    if ((idx >= _count || idx < 0))
        return ;
    if (_trash)
        delete  _trash;
    _trash = _inventory[idx];
    _count--;
    // for(int i = 0; i < 4; i ++)
    // {
    //     for(int j = i; j < 4; j++)
    //     {
    //         if (_inventory[j])
    //         {
    //             _inventory[i] = _inventory[j];
    //             break ;
    //         }
    //     }
    // }
	for(int i = idx; i < _count; i++)
		_inventory[i] = _inventory[i + 1];
	_inventory[_count] = NULL;
}
void    Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx < 4) && _inventory[idx] != NULL)
    	_inventory[idx]->use(target);
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
    }
    if (_trash != NULL)
        delete _trash;
}