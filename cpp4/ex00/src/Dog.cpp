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

Dog::Dog()
{
	Animal::_type = "Dog";
	std::cout << "Default Dog Constructor called \n";
	return ;
}

// Dog::Dog( std::string animal_type )
// {
// 	Animal::_type = "Dog";
// 	std::cout << "string type Dog Constructor called \n";
// 	return ;
// }

// Dog::Dog( Dog const & copy )
// {
// 	*this = copy;
// 	std::cout << "copy Dog Constructor called \n";
// 	return ;
// }

// Dog&	Dog::operator=( Dog const & src )
// {
	
// }

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