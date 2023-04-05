/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:16:33 by adouay            #+#    #+#             */
/*   Updated: 2023/04/05 18:15:44 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	std::cout << c;
}

int	main(int ac, char **av)
{
	std::string	str;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int	i(1); av[i]; i++)
	{
		str = av[i];
		for(int j(0); str[j]; j++)
			megaphone(str[j]);
	}
	std::cout << std::endl;
}