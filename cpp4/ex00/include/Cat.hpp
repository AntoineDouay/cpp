/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:44 by adouay            #+#    #+#             */
/*   Updated: 2023/05/29 18:14:27 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

	public :
	
	Cat( void );
	//Cat( std::string animal_type );
	Cat( Cat const & copy );
	~Cat ( void );

	//Cat&	operator=( Cat const & src );
	void makeSound( void ) const;

};

#endif