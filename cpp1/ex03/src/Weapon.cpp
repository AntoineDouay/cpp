/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:34:44 by adouay            #+#    #+#             */
/*   Updated: 2023/04/11 18:02:06 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon( void )
{
}

Weapon::Weapon( std::string type ) : _type(type)
{
}

void	Weapon::setType( std::string str )
{
	_type = str;
	return ;
}

const std::string &Weapon::getType( void )
{
	return _type;
}