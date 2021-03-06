/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:41:47 by mout              #+#    #+#             */
/*   Updated: 2021/11/08 19:29:44 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->setType("Dog");
    std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(Dog const & a1)
{
    this->setType(a1.getType());
    std::cout << "Dog copy constructor" << std::endl;
}

Dog  Dog::operator=(Dog const & a1)
{
    this->setType(a1.getType());
    std::cout << "Dog Assignation operator" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}