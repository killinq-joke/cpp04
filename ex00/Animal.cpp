/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:17:04 by mout              #+#    #+#             */
/*   Updated: 2021/11/09 09:02:22 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(Animal const & a1)
{
    this->setType(a1.getType());
    std::cout << "Animal copy constructor" << std::endl;
}

Animal  Animal::operator=(Animal const & a1)
{
    this->setType(a1.getType());
    std::cout << "Animal Assignation operator" << std::endl;
    return (*this);
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
    std::cout << "I'm an Animal" << std::endl;
}

void    Animal::setType(std::string type)
{
    this->_type = type;
}