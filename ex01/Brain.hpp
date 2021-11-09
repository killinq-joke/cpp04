/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:50:20 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/09 13:15:12 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain
{
public:
	Brain(void);
	Brain(Brain const & b1);
	Brain	operator=(Brain const & b1);
	~Brain(void);

	std::string getIdea(unsigned int index) const;
	void		setIdea(unsigned int index, std::string idea);

private:
	std::string _ideas[100];
	
};

#endif