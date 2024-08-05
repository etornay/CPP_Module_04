/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:56:21 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/03 19:12:51 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat:public Animal
{
	private:
			Brain *attribute;

	public:
			Cat(void);
			Cat(std::string str);
			Cat(const Cat &copy);
			Cat &operator = (const Cat &other);
			~Cat(void);

			void makeSound(void) const;
};
#endif