/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:53:32 by adouay            #+#    #+#             */
/*   Updated: 2023/04/11 16:11:27 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	
	std::string *ptr_str = &str;
	
	std::string &ref_str = str;

	std::cout << "----- Adresse -----" << std::endl;
	std::cout << "str:     " << &str << std::endl;
	std::cout << "ptr_str: " << ptr_str << std::endl;
	std::cout << "ref_str: " << &ref_str << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << "----- Value -----" << std::endl;
	std::cout << "str:     " << str << std::endl;
	std::cout << "ptr_str: " << *ptr_str << std::endl;
	std::cout << "ref_str: " << ref_str << std::endl;
	std::cout << "-----------------" << std::endl;
	
	return 0;
}