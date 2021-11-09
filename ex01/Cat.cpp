/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:21:02 by mout              #+#    #+#             */
/*   Updated: 2021/11/09 13:27:33 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->setType("Cat");
    this->setBrain(new Brain());
    std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(Cat const & c1)
{
    this->setType(c1.getType());
    this->setBrain(new Brain(c1.getBrain()));
    std::cout << "Cat Copy Constructor" << std::endl;
}

Cat     Cat::operator=(Cat const & c1)
{
    this->setType(c1.getType());
    this->setBrain(new Brain(c1.getBrain()));
    std::cout << "Cat Assignation operator" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	if (this->getBrain())
		delete this->getBrain();
	std::cout << "Cat destructor" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaw" << std::endl;
}

void    Cat::setBrain(Brain *brain)
{
    this->_brain = brain;
}

Brain*   Cat::getBrain(void) const
{
    return (this->_brain);
}