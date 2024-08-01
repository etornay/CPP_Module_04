/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:40:46 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 17:59:47 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string str)
{
	std::cout << "Animal: Attributes constructor called" << std::endl;
	type = str;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	type = copy.type;
}

Animal &Animal::operator = (const Animal &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	std::cout << "Animal type selected:" << std::endl;
	return (type);
}

void Animal::setType(std::string str)
{
	type = str;
}

void Animal::makeSound(void) const
{
	std::cout << "Generic sound" << std::endl;
}
