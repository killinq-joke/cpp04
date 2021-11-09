/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:30:29 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/08 19:31:18 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & a1)
{
    this->setType(a1.getType());
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal  WrongAnimal::operator=(WrongAnimal const & a1)
{
    this->setType(a1.getType());
    std::cout << "WrongAnimal Assignation operator" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

std::string    WrongAnimal::getType(void) const
{
    return (this->_type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "I'm a wrong Animal" << std::endl;
}

void    WrongAnimal::setType(std::string type)
{
    this->_type = type;
}