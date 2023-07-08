/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:34:58 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:34:59 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return *this;
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