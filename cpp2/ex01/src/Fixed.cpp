/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:34:16 by adouay            #+#    #+#             */
/*   Updated: 2023/06/25 21:12:19 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default Constructor Called\n";
	return ;
}

Fixed::Fixed( const int n ) : _value(n << _BITS)
{
	std::cout << "Int Constructor Called\n";
	return ;
}

Fixed::Fixed( const float n )
{
	std::cout << "float Constructor Called\n";
	_value = (int) roundf(n * (1 << _BITS));
	//std::cout << _value << std::endl;
	
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
	return (_value);
}

void	Fixed::setRawBits ( int const raw )
{
	_value = raw;
	return ;
}

int		Fixed::toInt( void ) const
{
	return _value >> _BITS;
}

float		Fixed::toFloat( void ) const
{
	return (float)_value / (float)(1 << _BITS);
}

std::ostream&	operator<<( std::ostream& stream, Fixed const &src )
{
	stream << src.toFloat();
	return stream;
}

