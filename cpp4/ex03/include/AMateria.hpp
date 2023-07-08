/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:35:14 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:35:15 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria{
    public :

    AMateria( void );
    AMateria(std::string const & type); 
    AMateria( const AMateria & copy );
    virtual ~AMateria( void );

    AMateria&   operator=(const AMateria & src);

    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

    protected :

    std::string _type;  
};

#endif