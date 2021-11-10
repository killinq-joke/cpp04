/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:56:26 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/10 18:38:24 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character(std::string const & name);
	Character	operator=(Character const & c1);
	~Character(void);

	std::string const &	getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
	unsigned int		getCount(void) const;
	AMateria*			getInventory(unsigned int idx);
	void				setName(std::string name);
	void				setCount(unsigned int count);

private:
	AMateria		*_inventory[4];
	std::string		_name;
	unsigned int	_count;
};

#endif