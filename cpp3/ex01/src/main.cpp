/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:04:57 by adouay            #+#    #+#             */
/*   Updated: 2023/05/30 17:05:03 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main()
{
	ScavTrap tim("tim");
	ScavTrap tom;
	tom = tim;
	for (int i(0); i < 50 ; i++)
		tim.attack("sam");
	tim.attack("sam");
	tim.attack("sam");
	tim.guardGate();
    return 0;
}