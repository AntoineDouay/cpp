/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:34:16 by adouay            #+#    #+#             */
/*   Updated: 2023/06/27 13:50:34 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
}

Fixed::Fixed( const int n ) : _value(n << _BITS)
{
}

Fixed::Fixed( const float n )
{
	_value = (int) roundf(n * (1 << _BITS));
	std::cout << _value << std::endl;
	std::cout << (float)(1 << _BITS) << std::endl;
	return ;
}

Fixed::Fixed( Fixed const &src )
{
	*this = src;
	return ;
}

Fixed::~Fixed( void )
{
}

Fixed&	Fixed::operator=( Fixed const &src )
{
	_value = src.getRawBits();
	return *this;
}

/* operateur de comparaison */

bool Fixed::operator==( Fixed const &src ) const
{
	return (_value == src.getRawBits());
}

bool Fixed::operator!=( Fixed const &src ) const
{
	return (_value != src.getRawBits());
}

bool Fixed::operator<( Fixed const &src ) const
{
	return _value < src.getRawBits();
}

bool Fixed::operator>( Fixed const &src ) const
{
	return _value > src.getRawBits();
}

bool Fixed::operator>=( Fixed const &src ) const
{
	return _value >= src.getRawBits();
}
/* ------------------ */
/* operateur d' arithmetique */

Fixed	Fixed::operator+( Fixed const &src )
{
	Fixed	temp;
	temp.setRawBits(this->_value + src.getRawBits());
	return temp;
}

Fixed	Fixed::operator-( Fixed const &src )
{
	Fixed	temp;
	temp.setRawBits(this->_value - src.getRawBits());
	return temp;
}

Fixed	Fixed::operator*( Fixed const &src )
{
	Fixed	temp;
	temp.setRawBits(this->_value * src.toInt());
	return temp;
}

Fixed	Fixed::operator/( Fixed const &src )
{
	Fixed	temp;
	temp.setRawBits(this->_value / src.toInt());
	return temp;
}
/* ------------------ */

Fixed&	Fixed::operator++( void )
{
	++_value;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed	temp(*this);
	++_value;
	return temp;
}

Fixed&	Fixed::operator--( void )
{
	--_value;
	return *this; 
}

Fixed	Fixed::operator-- ( int )
{
	Fixed	temp(*this);
	--_value;
	return temp;
}

Fixed	Fixed::min( Fixed& left, Fixed& right )
{
	if (left < right)
		return left;
	return right;
}

Fixed	Fixed::min( const Fixed& left, const Fixed& right )
{
	if (left < right)
		return left;
	return right;
}

Fixed	Fixed::max( Fixed& left, Fixed& right )
{
	if (left > right)
		return left;
	return right;
}

Fixed	Fixed::max( const Fixed& left, const Fixed& right )
{
	if (left > right)
		return left;
	return right;
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

