/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:29:28 by adouay            #+#    #+#             */
/*   Updated: 2023/04/10 16:26:07 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : _contact_nbr(0)
{
}

void	PhoneBook::AddContact()
{
	Contact	contact;
	const int	max = 8;
	
	contact.SetValues();
	if (_contact_nbr < max)
	{
		_contact[_contact_nbr] = contact;
		_contact_nbr++;
	}
	else
	{
		for(int i(0); i < max - 1; i++)
			_contact[i] = _contact[i + 1];
		_contact[max - 1] = contact;
	}
	return ;
}

void	PhoneBook::SearchContact()
{
	std::string	index;
	
	DisplayPhoneBook();
	std::cout << "What Contact your looking for ?" << '\n';
	std::cin >> index;
	while (index.size() != 1 || (index[0] - '0' < 1  || index[0] - '0' > _contact_nbr))
	{
		std::cout << "Need a valid index" << '\n';
		std::cin >> index;
	}
	_contact[index[0] - '0' - 1].Display();
	return ;
}

void	PhoneBook::DisplayPhoneBook() const
{
	std::string	str;
	
	std::cout << "=============================================" << '\n';
	std::cout << "=                 PhoneBook                 =" << '\n';
	std::cout << "=============================================" << "\n";
	for(int i(0); i < _contact_nbr; i++)
	{
		std::cout << '|' << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << TroncString(_contact[i].GetFirstName()) << "|";
		std::cout << std::setw(10) << TroncString(_contact[i].GetLastName()) << "|";
		std::cout << std::setw(10) << TroncString(_contact[i].GetNickName()) << '|' << '\n';
		std::cout << "---------------------------------------------" << '\n';
	}
}
