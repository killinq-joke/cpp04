/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:01:10 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 15:06:33 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
	std::cout << "Character constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = nullptr;
	}
}

Character::Character(Character const & c1) : name(c1.getName())
{
	std::cout << "Character copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr)
			this->inventory[i] = c1.inventory[i]->clone();
		else
			this->inventory[i] = nullptr;
	}
}

Character Character::operator=(Character const & c1)
{
	std::cout << "Character assignation operator" << std::endl;
	this->name = c1.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr)
			this->inventory[i] = c1.inventory[i]->clone();
		else
			this->inventory[i] = nullptr;
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character destructor" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != nullptr)
	{
		this->inventory[idx] = nullptr;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != nullptr)
	{
		this->inventory[idx]->use(target);
	}
}