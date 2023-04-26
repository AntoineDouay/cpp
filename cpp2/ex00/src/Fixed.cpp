/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:34:16 by adouay            #+#    #+#             */
/*   Updated: 2023/04/26 19:03:40 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default Constructor Called\n";
	return ;
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy Constructor Called\n";
	*this = src;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor Called\n";
	return ;
}

Fixed&	Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called\n";
	_value = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (_value);
}

void	Fixed::setRawBits ( int const raw )
{
	_value = raw;
	return ;
}

