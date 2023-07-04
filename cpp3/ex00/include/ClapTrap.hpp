/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:15:47 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 13:15:49 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

    public :

    ClapTrap( void );
    ClapTrap( const std::string  name );
    ClapTrap( ClapTrap const & src );
    ~ClapTrap( void );

    ClapTrap&   operator=( ClapTrap const &src);

    void        attack( const std::string& target );
    void        takeDamage( unsigned int amount );
    void        beRepaired( unsigned int amount );

    private :

    std::string _name;
    int         _hp;
    int         _energy_point;
    int         _atk_dmg;

};

# endif