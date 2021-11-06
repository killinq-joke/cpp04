/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:17:04 by mout              #+#    #+#             */
/*   Updated: 2021/11/06 15:17:47 by mout             ###   ########.fr       */
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