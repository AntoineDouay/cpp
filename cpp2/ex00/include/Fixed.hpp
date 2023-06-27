/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:14:27 by adouay            #+#    #+#             */
/*   Updated: 2023/06/25 20:55:31 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

class Fixed {
	
	public :

	Fixed( void );
	Fixed( Fixed const &src );
	~Fixed( void );
	
	Fixed&	operator=(Fixed const &src);
	
	int			getRawBits ( void ) const;
	void		setRawBits ( int const raw );
	
	private :
	
	int					_value;
	static const int	_BITS = 8;
};

#endif