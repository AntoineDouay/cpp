/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:14:27 by adouay            #+#    #+#             */
/*   Updated: 2023/04/26 19:49:25 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

class Fixed {
	
	public :

	Fixed( void );
	Fixed( const int n );
	Fixed( const float n );
	Fixed( Fixed const &src );
	~Fixed( void );
	
	Fixed&	operator=(Fixed const &src);
	
	int			getRawBits ( void ) const;
	void		setRawBits ( int const raw );
	
	float		toFloat( void ) const;
	int			toInt( void ) const;

	private :
	
	int					_value;
	static const int	_BITS = 8;
};

#endif