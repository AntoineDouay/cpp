/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:41 by adouay            #+#    #+#             */
/*   Updated: 2023/05/29 18:14:53 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

	public : 
	
	Dog( void );
	//Dog( std::string animal_type );
	Dog( Dog const & copy );
	~Dog ( void );

	//Dog&	operator=( Dog const & src );

	void makeSound( void ) const;

};

#endif