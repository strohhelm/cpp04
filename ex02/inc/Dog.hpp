/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:37:29 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 19:49:38 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOURS
#define COLOURS
#define X	"\033[0m"
#define R	"\033[31m"
#define P	"\033[38;2;255;20;200m"
#define LP	"\033[38;2;200;50;160m"
#define G	"\033[32m"
#define L	"\033[38;2;50;150;50m"
#define D	"\033[38;2;155;220;255m"
#define Y	"\033[33m"
#define	O	"\033[38;2;255;165;0m"
#define B	"\033[34m"
#define M	"\033[35m"
#define C	"\033[36m"
#define W	"\033[37m"
#endif

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "./AAnimal.hpp"

class Dog	: public AAnimal
{
	public:
			Dog();
			~Dog();
			Dog(const Dog& original);
			Dog& operator=(const Dog &original);
	void	makeSound(void) const;
};

#endif