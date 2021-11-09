/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:30:29 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/08 19:31:40 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const & a1)
{
    this->setType(a1.getType());
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat  WrongCat::operator=(WrongCat const & a1)
{
    this->setType(a1.getType());
    std::cout << "WrongAnimal Assignation operator" << std::endl;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "I'm a wrong Cat" << std::endl;
}