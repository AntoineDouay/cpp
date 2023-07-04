/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:38 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 17:19:46 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>

class Animal {

	public :

	Animal( void );
	Animal( Animal const & copy );
	virtual ~Animal( void );
	
	Animal&	operator=( Animal const & src );

	std::string	getType( void ) const;

	virtual void makeSound( void ) const;

	protected :

	std::string	_type;
	
};

#endif