/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:11:27 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/12 11:07:53 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria::AMateria("ice")
{
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(Ice const & i1) : AMateria::AMateria(i1.getType())
{
	std::cout << "Ice copy constructor" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor" << std::endl;
}

AMateria* Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	(void)target;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
