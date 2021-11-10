/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:09:39 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/10 18:22:53:01 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Amateria constructor" << std::endl;
}

AMateria::AMateria(AMateria const & a1) : _type(a1.getType())
{
	std::cout << "Amateria copy constructor" << std::endl;
}

// AMateria	AMateria::operator=(AMateria const & a1)
// {
// 	this->setType(a1.getType());
// 	std::cout << "Amateria Assignation operator" << std::endl;
// 	return (*this);
// }

AMateria::~AMateria(void)
{
	std::cout << "Amateria destructor" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

// virtual void AMateria::use(ICharacter& target)
// {
// }