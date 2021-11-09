/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:52:33 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/09 13:16:08 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(Brain const & b1)
{
	for (int i = 0; i < 100; i++)
	{
		this->setIdea(i, b1.getIdea(i));
	}
	std::cout << "Brain Copy Constructor" << std::endl;
}

Brain	Brain::operator=(Brain const & b1)
{
	for (int i = 0; i < 100; i++)
	{
		this->setIdea(i, b1.getIdea(i));
	}
	std::cout << "Brain Assignation operator" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor" << std::endl;
}

std::string Brain::getIdea(unsigned int index) const
{
	if (index < 100)
		return (this->_ideas[index]);
	return (NULL);
}