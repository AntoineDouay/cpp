/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:57 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 18:03:57 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog Constructor called \n";
	_type = "Dog";
	_cervo = new Brain;
	return ;
}

Dog::Dog( Dog const & copy ) : Animal ( copy )
{
	std::cout << "copy Dog Constructor called \n";
	*this = copy;
	return ;
}

Dog&	Dog::operator=( Dog const & src )
{
	_type = src._type;
	_cervo = src._cervo;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof !!\n";
	return ;
}

void	Dog::think()
{
	std::cout << "dog thinking about " << _cervo->getIdea() << std::endl ;
}

Dog::~Dog()
{
	delete _cervo;
	std::cout << "Dog Destructor called \n";
	return ;
}