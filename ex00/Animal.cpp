/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:17:04 by mout              #+#    #+#             */
/*   Updated: 2021/11/06 15:25:15 by mout             ###   ########.fr       */
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
void    Animal::setType(std::string type)
{
    this->_type = type;
}