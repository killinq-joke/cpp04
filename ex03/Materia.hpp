/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:29:52 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/11 09:06:40 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP
# include "AMateria.hpp"

class Materia : public AMateria
{
public:
	// Materia(std::string const & type);
	// Materia(AMateria const & m1);
	~Materia(void);
	Materia	operator=(AMateria const & a1);

	AMateria*	clone(void) const;
	void		use(ICharacter& target);
};

#endif