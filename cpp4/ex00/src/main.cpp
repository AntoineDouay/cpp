/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:48 by adouay            #+#    #+#             */
/*   Updated: 2023/07/04 17:18:53 by adouay           ###   ########.fr       */
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

const WrongAnimal* tang = new WrongCat;
const Animal* meta = new Animal();
const Animal* i = new Cat();
const Animal* j = new Dog();

std::cout << tang->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
tang->makeSound(); //will output the cat sound!
i->makeSound();
j->makeSound();
meta->makeSound();

delete tang;
delete meta;
delete j;
delete i;

return 0;
}