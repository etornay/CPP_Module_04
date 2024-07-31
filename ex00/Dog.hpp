/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:45:37 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/31 17:02:25 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog:public Animal
{
	private:
			std::string type;

	public:
			Dog(void);
			Dog(std::string str);
			Dog(const Dog &copy);
			Dog &operator = (const Dog &other);
			~Dog(void);
};
#endif