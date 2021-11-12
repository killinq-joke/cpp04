/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:18:46 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/12 09:43:29 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character(std::string const & name);
	Character(Character const & c1);
	Character operator=(Character const & c1);
	~Character(void);

	std::string const & getName(void) const;
	void	 			setName(std::string const & name);
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

	AMateria*			inventory[4];

private:
	std::string const & _name;
};

#endif