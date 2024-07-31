/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:56:21 by etornay-          #+#    #+#             */
/*   Updated: 2024/07/31 17:02:10 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat:public Animal
{
	private:
			std::string type;

	public:
			Cat(void);
			Cat(std::string str);
			Cat(const Cat &copy);
			Cat &operator = (const Cat &other);
			~Cat(void);
};
#endif