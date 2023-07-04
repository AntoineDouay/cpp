/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:51 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 17:19:55 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Default Animal Constructor Called \n";
	return ;
}

Animal::Animal (Animal const & copy )
{
	*this = copy;
	std::cout << "Copy Animal Constructor Called \n";
	return ;
}

Animal&	Animal::operator=( Animal const & src )
{
	_type = src._type;
	return *this;
}

std::string	Animal::getType() const
{
	return _type;
}

void	Animal::makeSound() const
{
	std::cout << "Idk what Animal I am ;/ \n";
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called\n";
}