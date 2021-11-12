/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:59:56 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/12 09:47:58 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual	~ICharacter() {};
	virtual	std::string const & getName() const = 0;
	virtual	void equip(AMateria* m) = 0;
	virtual	void unequip(int idx) = 0;
	virtual	void use(int idx, ICharacter& target) = 0;
};

#endif
