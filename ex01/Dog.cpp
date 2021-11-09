/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:41:47 by mout              #+#    #+#             */
/*   Updated: 2021/11/09 13:23:42 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->setType("Dog");
	this->setBrain(new Brain());
    std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(Dog const & d1)
{
    this->setType(d1.getType());
    this->setBrain(new Brain(this->getBrain()));
}

Dog     Dog::operator=(Dog const & d1)
{
    this->setType(d1.getType());
    this->setBrain(new Brain(this->getBrain()));
    return (*this);
}

Dog::~Dog(void)
{
	if (this->getBrain())
		delete this->getBrain();
    std::cout << "Dog Destructor" << std::endl;
}

void    Dog::setBrain(Brain * brain)
{
    this->_brain = brain;
}

Brain*   Dog::getBrain(void)
{
    return (this->_brain);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}