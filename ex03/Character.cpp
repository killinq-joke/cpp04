/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:17:40 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/12 09:51:04 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Character constructor" << std::endl;
}

Character::Character(Character const & c1) : _name(c1.getName())
{
	//copier inventaire
	std::cout << "Character copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = c1.inventory[i];
	}
}

Character	Character::operator=(Character const & c1)
{
	// this->_name = c1.getName();
	std::cout << "Character assignation operator" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = c1.inventory[i];
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character destructor" << std::endl;
}

std::string const & Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		this->inventory[idx] = nullptr;
	}
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx]->use(target);
}