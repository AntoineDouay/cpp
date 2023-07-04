/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:04:57 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 16:58:16 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int main()
{
	ClapTrap a("a");
	ScavTrap b("b");
	FragTrap c("c");
	DiamondTrap tim("tim");
	DiamondTrap tam(tim);
	DiamondTrap tom;

	tom.takeDamage(100);
	tom.beRepaired(60);
	tom = tim;
	tom.attack("peter");
	tim.attack("sam");
	tim.beRepaired(20);
	tim.highFivesGuys();
	tom.WhoAmI();
	
    return 0;
}