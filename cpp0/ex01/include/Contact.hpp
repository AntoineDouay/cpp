/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:17:57 by adouay            #+#    #+#             */
/*   Updated: 2023/04/05 19:27:58 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP
# include <iostream>

class Contact {
	
	public :
	
	std::string fisrt_name;
	std::string last_name;
	std::string nick_name;
	std::string secret;
	std::string	phone_nbr;

	Contact(void);
	~Contact(void);
};
#endif