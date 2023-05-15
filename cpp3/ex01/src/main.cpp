/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:04:57 by adouay            #+#    #+#             */
/*   Updated: 2023/05/15 18:05:01 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
	ClapTrap Bob;
	ClapTrap Touf("Touf");
    ClapTrap Antoine("Antoine");
	ClapTrap Bab(Antoine);

	Bob.attack("ilyes");
	Bob = Touf;
	Bob.attack("ilyes");
	Bab.beRepaired(12);
	Antoine.takeDamage(10);
	Antoine.attack("ilyes");
	Antoine.beRepaired(7);
    return 0;
}