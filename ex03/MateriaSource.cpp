/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:32:25 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 15:30:03 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->learned[i] = nullptr;
	}
}

MateriaSource::MateriaSource(MateriaSource const & m1)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] != nullptr)
			this->learned[i] = m1.learned[i]->clone();
		else
			this->learned[i] = nullptr;
	}
}

MateriaSource	MateriaSource::operator=(MateriaSource const & m1)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] != nullptr)
			this->learned[i] = m1.learned[i]->clone();
		else
			this->learned[i] = nullptr;
	}
	return (*this);
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
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] != nullptr && this->learned[i]->getType() == type)
			return (this->learned[i]->clone());
	}
	return (nullptr);
}
