/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:53:37 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/13 14:21:28 by ztouzri          ###   ########.fr       */
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
	virtual	~AMateria(void);
	
	std::string const & getType(void) const;

	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string _type;

};

#endif