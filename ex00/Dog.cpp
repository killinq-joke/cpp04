/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:41:47 by mout              #+#    #+#             */
/*   Updated: 2021/11/06 15:42:46 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->setType("Dog");
    std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor" << std::endl;
}
