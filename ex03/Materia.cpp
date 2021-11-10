/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:29:23 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/10 18:30:21 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

// Materia::Materia(std::string const & type) _type(type)
// {
// }

Materia	Materia::operator=(AMateria const & a1)
{
	this->setType(a1.getType());
	return (*this);
}

Materia::~Materia(void)
{
}

AMateria*	Materia::clone(void) const
{
	return ();
}

void		Materia::use(ICharacter& target)
{
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}
