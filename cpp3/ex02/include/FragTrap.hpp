/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:19:28 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 16:19:29 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class FragTrap : public ClapTrap{

	public : 
	
	FragTrap( void );
	FragTrap ( const std::string name );
	FragTrap ( FragTrap const & src );
	~FragTrap( void );

	FragTrap&	operator=( FragTrap const & src );

    void	highFivesGuys( void );
};

#endif