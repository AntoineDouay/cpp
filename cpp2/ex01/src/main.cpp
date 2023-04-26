/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:55:30 by adouay            #+#    #+#             */
/*   Updated: 2023/04/26 20:24:07 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main( void ) {
	Fixed a(static_cast<float>(55.6));
	//Fixed b(17.46567);

	std::cout << a.toInt() << std::endl;
	//std::cout << b.toFloat() << std::endl;
	
	return 0;
}