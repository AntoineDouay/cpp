/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:14:27 by adouay            #+#    #+#             */
/*   Updated: 2023/06/27 14:00:31 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {
	
	public :

	Fixed( void );
	Fixed( const int n );
	Fixed( const float n );
	Fixed( Fixed const &src );
	~Fixed( void );
	
	Fixed&	operator=(Fixed const &src);

	bool	operator==( Fixed const &src ) const;
	bool	operator!=( Fixed const &src ) const;
	bool	operator<( Fixed const &src ) const;
	bool	operator<=( Fixed const &src ) const;
	bool	operator>( Fixed const &src ) const;
	bool	operator>=( Fixed const &src ) const;
	
	Fixed		operator+( Fixed const &src );
	Fixed		operator-( Fixed const &src );
	Fixed		operator*( Fixed const &src );
	Fixed		operator/( Fixed const &src );

	Fixed&	operator++( void );
	Fixed	operator++( int );

	Fixed&	operator--( void );
	Fixed	operator--( int );

	static Fixed	min( Fixed& left, Fixed& right );
	static Fixed	max( Fixed& left, Fixed& right );

	static Fixed	min( const Fixed& left, const Fixed& right );
	static Fixed	max( const Fixed& left, const Fixed& right );
	
	int			getRawBits ( void ) const;
	void		setRawBits ( int const raw );
	
	float		toFloat( void ) const;
	int			toInt( void ) const;

	private :
	
	int					_value;
	static const int	_BITS = 8;
};

std::ostream&	operator<<( std::ostream& stream, Fixed const &src );

#endif