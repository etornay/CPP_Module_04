/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:45:37 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 18:57:01 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog:public Animal
{
	private:
			Brain *attribute;

	public:
			Dog(void);
			Dog(std::string str);
			Dog(const Dog &copy);
			Dog &operator = (const Dog &other);
			~Dog(void);

			void makeSound(void) const;
};
#endif