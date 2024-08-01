/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:40:55 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 15:23:22 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
			std::string type;

	public:
			Animal(void);
			Animal(std::string str);
			Animal(const Animal &copy);
			Animal &operator = (const Animal &other);
			virtual ~Animal(void);
			
			std::string getType(void) const;
			void setType(std::string str);
			virtual void makeSound(void) const;
};
#endif