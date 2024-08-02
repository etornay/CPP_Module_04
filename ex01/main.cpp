/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:37:27 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/02 14:37:11 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrongmeta->makeSound();
	k->makeSound();


	Dog* jj = new Dog();
	Dog* jjj = new Dog();
	jj->getAttribute()->setIdeas("Guau");
	std::cout << jj->getAttribute()->getIdeas() << std::endl;
	*jjj = *jj;
	delete meta;
	delete j;
	delete i;
	delete k;
	delete wrongmeta;
	delete jj;
	delete jjj;
	return (0);
}
