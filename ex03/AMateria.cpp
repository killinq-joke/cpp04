/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:44:54 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 15:31:17 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(AMateria const & a1) : type(a1.getType())
{
	std::cout << "AMateria copy constructor" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::setType(std::string const & type)
{
	this->type = type;
}

void		AMateria::use(ICharacter& target)
{
	(void)target;
}