/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:34:48 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:03:08 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

int main()
{

const Animal* meta = new Animal();
const Animal* i = new Cat();
const Animal* j = new Dog();

const WrongAnimal* tang = new WrongCat();

std::cout << meta->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << tang->getType() << " " << std::endl;

meta->makeSound();
i->makeSound();
j->makeSound();
tang->makeSound();

delete tang;
delete meta;
delete j;
delete i;

return 0;
}