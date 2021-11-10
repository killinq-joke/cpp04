/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:09:39 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/10 16:29:17 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Amateria constructor" << std::endl;
}

AMateria::AMateria(AMateria const & a1)
{
	std::cout << "Amateria copy constructor" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Amateria destructor" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

virtual void AMateria::use(ICharacter& target)
{
}