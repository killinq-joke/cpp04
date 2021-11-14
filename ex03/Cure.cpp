/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:52:15 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 14:58:50 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria::AMateria("cure")
{
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(Cure const & c1) : AMateria::AMateria("cure")
{
	std::cout << "Cure copy constructor" << std::endl;
	this->type = c1.getType();
}

Cure	Cure::operator=(Cure const & c1)
{
	this->setType(c1.getType());
	std::cout << "Cure assignation operator" << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor" << std::endl;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}