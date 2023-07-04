/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:48 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 18:01:40 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

// int	main ()
// {
// 	Cat Crakito;

// 	Crakito.makeSound();
// 	std::cout << Crakito.getType() << std::endl;
// 	return 1;
// }

int main()
{

// const WrongAnimal* tang = new WrongCat();
// const Animal* meta = new Animal();
// //const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << tang->getType() << " " << std::endl;
// //std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// tang->makeSound(); //will output the cat sound!
// i->makeSound();
// //j->makeSound();
// meta->makeSound();


// delete tang;
// delete meta;
// //delete j;
// delete i;
// return 0;

	Animal	*Zoo[10];
	for (int i = 0; i < 10; i++)
	{
		if (i %2 == 0)
			Zoo[i] = new Dog;
		else
			Zoo[i] = new Cat;
	}
	for (int i = 0; i < 10; i++)
		delete Zoo[i];
}