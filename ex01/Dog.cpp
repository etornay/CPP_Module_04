/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:45:30 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 17:59:31 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string str)
{
	std::cout << "Dog: Attributes constructor called" << std::endl;
	this->type = str;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = copy.type;
}

Dog &Dog::operator = (const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF :P" << std::endl;
}
