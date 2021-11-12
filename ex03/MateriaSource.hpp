/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:10:53 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/12 15:40:41 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"

class MateriaSource
{
public:
	MateriaSource(void);
	~MateriaSource(void);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

	AMateria*	learned[4];
};

#endif