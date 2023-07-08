/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:38 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:15:42 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	public :

	WrongAnimal( void );
	WrongAnimal( std::string name_type );
	WrongAnimal( WrongAnimal const & copy );
	~WrongAnimal( void );
	
	WrongAnimal&	operator=( WrongAnimal const & src );

	std::string	getType( void ) const;

	void makeSound( void ) const;

	protected :

	std::string	_type;
	
};

#endif