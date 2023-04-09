/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:28:21 by adouay            #+#    #+#             */
/*   Updated: 2023/04/09 18:56:36 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

void	Contact::SetValues()
{
	std::cout << "==========" << '\n';
	std::cout << "what your first name ?" << '\n';
	while (_first_name.empty())
		std::cin >> _first_name;

	std::cout << "what your last name ?" << '\n';
	while (_last_name.empty())
		std::cin >> _last_name;

	std::cout << "what your nick name ?" << '\n';
	while (_nick_name.empty())
		std::cin >> _nick_name;

	std::cout << "what your depest secret ?" << '\n';
	while (_secret.empty())
		std::cin >> _secret;

	std::cout << "what your phone number ?" << '\n';
	while (_phone_nbr.empty())
		std::cin >> _phone_nbr;
	std::cout << "==========" << "\n\n";
	return ;
}

std::string	Contact::GetFirstName() const
{
	return _first_name;
}

std::string	Contact::GetLastName() const
{
	return _last_name;
}

std::string	Contact::GetNickName() const
{
	return _nick_name;
}

void	Contact::Display() const
{
	std::cout << "==========" << '\n';
	std::cout << "His first name is " << _first_name << '\n';
	std::cout << "His last name is " << _last_name << '\n';
	std::cout << "His nick name is " << _nick_name << '\n';
	std::cout << "His deepest secret is " << _secret << '\n';
	std::cout << "His phone number is " << _phone_nbr << '\n';
	std::cout << "==========" << "\n\n";
	return ;
}