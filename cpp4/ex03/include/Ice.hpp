/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:35:29 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:35:30 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria{
    public :

    Ice( void );
    Ice( const Ice & copy );
    ~Ice( void );

    Ice&   operator=(const Ice & src);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif