/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:34:53 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:34:54 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure()
{
    _type = "cure";
}

Cure::Cure( const Cure & copy )
{
    *this = copy;
}

Cure&    Cure::operator=(const Cure & src )
{
    _type = src._type;
	return *this;
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