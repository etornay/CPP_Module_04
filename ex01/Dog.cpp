/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:45:30 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/02 14:39:56 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->attribute = new Brain();
	this->type = "Dog";
}

Dog::Dog(std::string str)
{
	std::cout << "Dog: Attributes constructor called" << std::endl;
	this->attribute = new Brain();
	this->type = str;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	if (this != &copy)
	{
		if (this->attribute)
			delete (this->attribute);
		this->attribute = new Brain;
		this->type = copy.type;
	}
}

Dog &Dog::operator = (const Dog &other)
{
	if (this != &other)
	{
		if (this->attribute)
			delete (this->attribute);
		this->attribute = new Brain;
		this->type = other.type;
	}
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete this->attribute;
	std::cout << "Dog: Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF :P" << std::endl;
}

Brain *Dog::getAttribute(void)
{
	return (this->attribute);
}