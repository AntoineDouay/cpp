/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:44 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 17:17:16 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

	public :
	
	Cat( void );
	Cat( Cat const & copy );
	~Cat ( void );

	Cat&	operator=( Cat const & src );
	
	void makeSound( void ) const;

};

#endif