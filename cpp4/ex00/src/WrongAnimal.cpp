/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:51 by adouay            #+#    #+#             */
/*   Updated: 2023/05/29 18:24:04 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "Default WrongAnimal Constructor Called \n";
	return ;
}

WrongAnimal::WrongAnimal( std::string name_type ) : _type( name_type )
{
	std::cout << "String Name WrongAnimal Constructor Called \n";
	return ;
}

WrongAnimal::WrongAnimal (WrongAnimal const & copy )
{
	*this = copy;
	std::cout << "Copy WrongAnimal Constructor Called \n";
	return ;
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const & src )
{
	_type = src._type;
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Idk what WrongAnimal I am ;/ \n";
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called\n";
}