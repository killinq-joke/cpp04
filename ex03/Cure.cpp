/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:11:27 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/13 14:23:48 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria::AMateria("cure")
{
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(Cure const & i1) : AMateria::AMateria(i1.getType())
{
	std::cout << "Cure copy constructor" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor" << std::endl;
}

AMateria* Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
