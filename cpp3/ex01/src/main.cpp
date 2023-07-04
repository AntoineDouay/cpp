/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:04:57 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 16:23:31 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main()
{
	ScavTrap tim("tim");
	ScavTrap tam(tim);
	ScavTrap tom;

	tom.takeDamage(100);
	tom.beRepaired(60);
	tom = tim;
	tom.attack("peter");
	tim.attack("sam");
	tim.beRepaired(20);
	tim.guardGate();
    return 0;
}