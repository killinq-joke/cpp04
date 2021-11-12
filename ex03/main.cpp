/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:49:41 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/12 09:30:22 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Cure.hpp"
// #include "Ice.hpp"
#include "Character.hpp"

int main()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);

	// delete bob;
	delete me;
	// delete src;

	return 0;
}