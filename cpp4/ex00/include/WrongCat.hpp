/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:44 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:04:55 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public :
	
	WrongCat( void );
	WrongCat( WrongCat const & copy );
	~WrongCat ( void );

	WrongCat&	operator=( WrongCat const & src );
	void makeSound( void ) const;

};

#endif