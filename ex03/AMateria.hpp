/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:42:42 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 15:30:36 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream> 
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
	AMateria(std::string const & type);
	AMateria(AMateria const & a1);
	virtual ~AMateria(void);

	std::string const & getType(void) const; //Returns the materia type
	void				setType(std::string const & type);
	virtual AMateria*	clone(void) const = 0;
	virtual void		use(ICharacter& target);

protected:
	std::string type;
};

#endif