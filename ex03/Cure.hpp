/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:52:32 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 14:58:29 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(Cure const & c1);
	Cure operator=(Cure const & c1);
	~Cure(void);

	AMateria* clone(void) const;
	void use(ICharacter& target);
};


#endif