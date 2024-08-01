/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:52:07 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/01 19:03:45 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"

class Brain
{
	private:

	public:
			Brain(void);
			Brain(std::string str);
			Brain(const Brain &copy);
			Brain &operator = (const Brain &other);
			~Brain(void);

			void makeSound(void) const;
};
#endif