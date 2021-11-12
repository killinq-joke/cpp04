/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:57:28 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/11 08:53:11 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Character constructor" << std::endl;
}

Character	Character::operator=(Character const & c1)
{
	this->setName(c1.getName());
	this->setCount(c1.getCount());
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character destructor" << std::endl;
}

void	Character::equip(AMateria* m)
{
	if (this->getCount() < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->getInventory(i))
				*this->getInventory(i) = *m;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->getInventory(idx)->use(target);
}

unsigned int Character::getCount(void) const
{
	return (this->_count);
}

std::string	const &	Character::getName(void) const
{
	return (this->_name);
}

void			Character::setName(std::string name)
{
	this->_name = name;
}

void			Character::setCount(unsigned int count)
{
	this->_count = count;
}

AMateria*		Character::getInventory(unsigned int idx)
{
	if (idx >= 0 && idx < 4)
		return (this->_inventory[idx]);
	return (NULL);
}
