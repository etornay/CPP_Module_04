/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:52:14 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/02 14:33:12 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::Brain(std::string str)
{
	std::cout << "Brain: Attributes constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = str;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator = (const Brain &other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	return (*this);
}

std::string Brain::getIdeas(void)
{
	for (int i = 0; i < 100; i++)
	{	
		if (!this->ideas[i].empty())
			return (this->ideas[i]);
	}
	return ("");
	/* SI QUIERO MOSTRAR TODAS LAS IDEAS, SE CAMBIA EL TIPO DE "std::string" A "void" */
}

void Brain::setIdeas(std::string s)
{
	int	i;
	
	i = 0;
	while (i < 100)
	{
		if (this->ideas[i].empty())
			this->ideas[i] = s;
		i++;
	}
}

Brain::~Brain(void)
{
	std::cout << "Brain: Destructor called" << std::endl;
}
