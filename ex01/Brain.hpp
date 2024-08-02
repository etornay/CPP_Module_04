/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etornay- <etornay-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:52:07 by etornay-          #+#    #+#             */
/*   Updated: 2024/08/02 14:25:46 by etornay-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	private:
			std::string ideas[100];

	public:
			Brain(void);
			Brain(std::string str);
			Brain(const Brain &copy);
			Brain &operator = (const Brain &other);
			std::string getIdeas(void);
			void setIdeas(std::string s);
			~Brain(void);
};
#endif