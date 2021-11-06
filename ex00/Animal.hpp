/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:13:45 by mout              #+#    #+#             */
/*   Updated: 2021/11/06 15:25:11 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{

public:
    Animal(void);
    ~Animal(void);
    void    setType(std::string type);
    std::string    getType(void) const;

protected:
    std::string _type;
};

#endif