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

Cat::Cat() : Animal("Cat")
{
	_cervo = new Brain;
	std::cout << "Default Cat Constructor called \n";
	return ;
}

Cat::Cat( Cat const & copy ) : Animal  ( copy )
{
	*this = copy;
	std::cout << "copy Cat Constructor called \n";
	return ;
}

Cat&	Cat::operator=( Cat const & src )
{
	_type = src._type;
	_cervo = src._cervo;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaow Miaow....\n";
	return ;
}

void	Cat::think()
{
	std::cout << "cat thinking about " << _cervo->getIdea() << std:: endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called \n";
	return ;
}
