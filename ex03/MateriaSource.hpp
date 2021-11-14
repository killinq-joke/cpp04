/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:32:34 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 15:30:17 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & m1);
	MateriaSource operator=(MateriaSource const & m1);
	~MateriaSource(void);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);

	AMateria* learned[4];
};

#endif