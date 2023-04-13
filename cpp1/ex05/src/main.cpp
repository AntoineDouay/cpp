/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:04:49 by adouay            #+#    #+#             */
/*   Updated: 2023/04/13 19:03:56 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main( void )
{
	Harl	harl;

	std::cout << "[DEBUG]" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "[INFO]" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "[WARNING]" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "[ERROR]" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	return (0);
}