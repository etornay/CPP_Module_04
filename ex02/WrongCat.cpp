/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:55:38 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 18:02:46 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string str)
{
	std::cout << "WrongCat: Attributes constructor called" << std::endl;
	this->type = str;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->type = copy.type;
}

WrongCat &WrongCat::operator = (const WrongCat &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "AWANAWANA KINKON" << std::endl;
}
