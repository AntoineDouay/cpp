/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:37:43 by adouay            #+#    #+#             */
/*   Updated: 2023/04/05 20:24:04 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	
	public :

	Contact Contact[8];

	PhoneBook(void);
	~PhoneBook(void);
	
	void	add(void);
	void	search(void);
	void	exit(void);
};

#endif