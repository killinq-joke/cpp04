/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:40:29 by mout              #+#    #+#             */
/*   Updated: 2021/11/09 13:22:13 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : virtual public Animal
{
public:
    Dog(void);
    Dog(Dog const & d1);
    Dog operator=(Dog const & d1);
	~Dog(void);
	void	makeSound(void) const;
	void	setBrain(Brain *brain);
	Brain	*getBrain(void) const;

private:
	Brain	*_brain;
};

#endif
