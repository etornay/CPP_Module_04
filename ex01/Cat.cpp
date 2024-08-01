/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:45:52 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 17:59:13 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string str)
{
	std::cout << "Cat: Attributes constructor called" << std::endl;
	this->type = str;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type = copy.type;
}

Cat &Cat::operator = (const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "MEOW MEOW :3" << std::endl;
}
