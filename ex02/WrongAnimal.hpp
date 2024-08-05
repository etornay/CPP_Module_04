/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:52:59 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 18:07:38 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
			std::string type;

	public:
			WrongAnimal(void);
			WrongAnimal(std::string str);
			WrongAnimal(const WrongAnimal &copy);
			WrongAnimal &operator = (const WrongAnimal &other);
			virtual ~WrongAnimal(void);
			
			std::string getType(void) const;
			void setType(std::string str);
			void makeSound(void) const;
};
#endif