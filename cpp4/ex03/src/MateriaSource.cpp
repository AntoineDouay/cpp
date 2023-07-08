/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:35:03 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:35:05 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        _learned[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & copy)
{
    *this = copy;
}

MateriaSource&  MateriaSource::operator=(const MateriaSource & src)
{
     for(int i = 0; i < 3; i++)
    {
        if (_learned[i])
            delete _learned[i];
        if (!src._learned[i])
            _learned[i] = NULL;
        else if (src._learned[i]->getType() == "ice")
            _learned[i] = new Ice();
        else if (src._learned[i]->getType() == "cure")
            _learned[i] = new Cure();
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria* Materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (_learned[i] == NULL)
		{
			if (Materia->getType() == "ice")
				_learned[i] = Materia;
			if (Materia->getType() == "cure")
				_learned[i] = Materia;
            return ;
		}
    }
	delete Materia;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
		if (_learned[i] != NULL && _learned[i]->getType() == type)
        {
			if(_learned[i]->getType() == "ice")
				return (new Ice);
			else if(_learned[i]->getType() == "cure")
				return (new Cure);
		}
    }
    return 0;
}
MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (_learned[i])
            delete _learned[i];
    }
}