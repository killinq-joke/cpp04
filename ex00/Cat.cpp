/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:21:02 by mout              #+#    #+#             */
/*   Updated: 2021/11/08 15:22:16 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->setType("Cat");
    std::cout << "Cat Constructor" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaw" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor" << std::endl;
}