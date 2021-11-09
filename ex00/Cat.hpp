/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:21:08 by mout              #+#    #+#             */
/*   Updated: 2021/11/08 19:28:43 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : virtual public Animal
{

public:
    Cat(void);
    Cat(Cat const & a1);
    Cat operator=(Cat const & a1);
    ~Cat(void);

    void    makeSound(void) const;

};

#endif