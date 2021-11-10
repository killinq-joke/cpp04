/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:29:52 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/10 16:32:52 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP
# include "AMateria.hpp"

class Materia
{
public:
	Materia(void);
	~Materia(void);

	AMateria*	clone(void) const;
	void		use(ICharacter& target);
};

#endif