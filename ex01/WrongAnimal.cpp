/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:53:02 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 18:04:24 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string str)
{
	std::cout << "WrongAnimal: Attributes constructor called" << std::endl;
	type = str;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	type = copy.type;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	std::cout << "WrongAnimal type selected:" << std::endl;
	return (type);
}

void WrongAnimal::setType(std::string str)
{
	type = str;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong sound" << std::endl;
}
