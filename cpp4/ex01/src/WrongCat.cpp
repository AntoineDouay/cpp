/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:08:20 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:08:22 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat Constructor called \n";
	return ;
}

WrongCat::WrongCat( WrongCat const & copy ) : WrongAnimal  ( copy )
{
	*this = copy;
	std::cout << "copy WrongCat Constructor called \n";
	return ;
}

WrongCat&	WrongCat::operator=( WrongCat const & src )
{
	_type = src._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Pouet Pouet....\n";
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called \n";
	return ;
}
