/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:10:14 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/11 09:06:47 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class	AMateria
{

public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & a1);
		// virtual AMateria	operator=(AMateria const & a1);
		virtual ~AMateria(void);
		
		std::string const & getType() const; //Returns the materia type
		void		setType(std::string const & type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

protected:
	std::string _type;

};

#endif