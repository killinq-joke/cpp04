/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:55:24 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/14 14:41:52 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const & c1);
	Ice operator=(Ice const & c1);
	~Ice(void);

	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif