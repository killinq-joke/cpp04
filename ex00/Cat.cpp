/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:21:02 by mout              #+#    #+#             */
/*   Updated: 2021/11/06 15:40:15 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->setType("Cat");
    std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor" << std::endl;
}