/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:35:42 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:35:43 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
    
    MateriaSource();
    MateriaSource(const MateriaSource & copy);
    ~MateriaSource();

    MateriaSource&  operator=(const MateriaSource & src);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

    private :

    AMateria*   _learned[4];
};

#endif