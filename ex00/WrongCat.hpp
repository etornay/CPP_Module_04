/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:55:41 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 17:57:06 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
	private:

	public:
			WrongCat(void);
			WrongCat(std::string str);
			WrongCat(const WrongCat &copy);
			WrongCat &operator = (const WrongCat &other);
			~WrongCat(void);

			void makeSound(void) const;
};
#endif