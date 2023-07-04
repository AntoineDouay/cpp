/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:57 by adouay            #+#    #+#             */
/*   Updated: 2023/05/29 18:14:42 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal ( "Dog" )
{
	std::cout << "Default Dog Constructor called \n";
	return ;
}

Dog::Dog( Dog const & copy ) : Animal ( copy )
{
	*this = copy;
	std::cout << "copy Dog Constructor called \n";
	return ;
}

Dog&	Dog::operator=( Dog const & src )
{
	_type = src._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof !!\n";
	return ;
}


Dog::~Dog()
{
	std::cout << "Dog Destructor called \n";
	return ;
}