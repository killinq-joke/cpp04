/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:12:42 by mout              #+#    #+#             */
/*   Updated: 2021/11/09 12:53:09 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void	func()
{
	int	i = 0;
	const	Animal* arr[10];

	while (i < 10)
	{
		if (i % 2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		delete arr[i];
		i++;
	}
}

int main()
{
	func();
	// use to show
	// const	Animal* a = new Animal;
	// delete a;
	return (0);
}