/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:13:45 by mout              #+#    #+#             */
/*   Updated: 2021/11/09 12:37:49 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class Animal
{

public:
    Animal(void);
    virtual ~Animal(void);

    void			setType(std::string type);
    std::string		getType(void) const;
    virtual void    makeSound(void) const = 0;

protected:
    std::string _type;

};

#endif