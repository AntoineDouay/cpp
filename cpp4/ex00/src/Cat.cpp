/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:54 by adouay            #+#    #+#             */
/*   Updated: 2023/05/29 18:14:38 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	Animal::_type = "Cat";
	std::cout << "Default Cat Constructor called \n";
	return ;
}

// Cat::Cat( std::string animal_type )
// {
// 	Animal::_type = "Cat";
// 	std::cout << "string type Cat Constructor called \n";
// 	return ;
// }

// Cat::Cat( Cat const & copy )
// {
// 	*this = copy;
// 	std::cout << "copy Cat Constructor called \n";
// 	return ;
// }

// Cat&	Cat::operator=( Cat const & src )
// {
	
// }

void	Cat::makeSound() const
{
	std::cout << "Miaow Miaow....\n";
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called \n";
	return ;
}
