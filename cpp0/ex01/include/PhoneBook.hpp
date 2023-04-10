/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:37:43 by adouay            #+#    #+#             */
/*   Updated: 2023/04/10 16:50:20 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

std::string	TroncString(std::string str);

class PhoneBook {
	
	public :

	PhoneBook();
	
	void	AddContact();
	void	SearchContact();
	
	private :
	
	Contact _contact[8];
	int		_contact_nbr;
	
	void	DisplayPhoneBook() const;
};

#endif