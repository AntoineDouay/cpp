/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:06:49 by adouay            #+#    #+#             */
/*   Updated: 2023/04/21 17:08:11 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

# define ZOMBIE_H

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif