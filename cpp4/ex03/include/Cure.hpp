/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:35:24 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:35:25 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{
    public :

    Cure( void );
    Cure( const Cure & copy );
    ~Cure( void );

    Cure&   operator=(const Cure & src);

    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif