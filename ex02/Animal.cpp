/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:17:04 by mout              #+#    #+#             */
/*   Updated: 2021/11/08 17:51:34 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor" << std::endl;
}

std::string    Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::makeSound(void) const
{
    std::cout << "I'm a " << this->getType() << std::endl;
}

void    Animal::setType(std::string type)
{
    this->_type = type;
}
