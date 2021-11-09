/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:30:44 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/08 19:31:04 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
    WrongAnimal(WrongAnimal const & a1);
    WrongAnimal  operator=(WrongAnimal const & a1);
	~WrongAnimal(void);

    void			setType(std::string type);
    std::string		getType(void) const;
    void			makeSound(void) const;

protected:
    std::string	_type;
};

#endif