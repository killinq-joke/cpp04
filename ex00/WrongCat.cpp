/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:30:29 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/08 18:17:33 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "I'm a wrong Cat" << std::endl;
}