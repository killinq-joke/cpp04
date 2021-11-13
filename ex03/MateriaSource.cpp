/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:11:42 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/13 13:28:51 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		this->learned[i] = nullptr;
	}
	std::cout << "MateriaSource constructor" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] == nullptr)
		{
			this->learned[i] = m;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] != nullptr && this->learned[i]->getType() == type)
		{
			return (this->learned[i]->clone());
		}
	}
	return (nullptr);
}