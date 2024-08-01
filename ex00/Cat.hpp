/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:56:21 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 17:56:27 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat:public Animal
{
	private:

	public:
			Cat(void);
			Cat(std::string str);
			Cat(const Cat &copy);
			Cat &operator = (const Cat &other);
			~Cat(void);

			void makeSound(void) const;
};
#endif