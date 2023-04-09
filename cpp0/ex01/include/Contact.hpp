/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:17:57 by adouay            #+#    #+#             */
/*   Updated: 2023/04/09 18:18:14 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP
# include "iostream"
# include "PhoneBook.hpp"

class Contact {
	
	public :

	void			SetValues();
	std::string		GetFirstName() const;
	std::string		GetLastName() const;
	std::string		GetNickName() const;
	void			Display() const;
	
	private :
	
	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _secret;
	std::string	_phone_nbr;
};
#endif