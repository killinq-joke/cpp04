/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:40:29 by mout              #+#    #+#             */
/*   Updated: 2021/11/09 09:02:43 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : virtual public Animal
{
public:
    Dog(void);
    Dog(Dog const & a1);
    Dog operator=(Dog const & a1);
    ~Dog(void);

    void    makeSound(void) const;
};

#endif
