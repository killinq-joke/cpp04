/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:56:52 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/12 09:49:42 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor" << std::endl;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}