/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:55:17 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 15:30:48 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria::AMateria("ice")
{
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(Ice const & c1) : AMateria::AMateria(c1.getType())
{
	std::cout << "Ice copy constructor" << std::endl;
}

Ice	Ice::operator=(Ice const & c1)
{
	this->setType(c1.getType());
	std::cout << "Ice assignation operator" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor" << std::endl;
}

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}