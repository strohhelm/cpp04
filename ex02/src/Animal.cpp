/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:58:26 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 15:16:01 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Animal::Animal() : _type("Animal")
{
	std::cout<<Y<<"Animal default constructor called!"<<X<<std::endl;
	_brain = new Brain;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
Animal::Animal(const Animal& original) : _type(original._type)
{
	std::cout<<Y<<"Animal copy constructor called!"<<X<<std::endl;
	_brain = new Brain(*(original._brain));
}
/*----------------------------------------------------------------------------*/


// Default destructor
Animal::~Animal()
{
	delete _brain;
	std::cout	<<Y<<"Animal default destructor called!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

Animal& Animal::operator=(const Animal& original)
{
	std::cout<<Y<<"Animal Copy assignment operator called!"<<X<<std::endl;
	if (this != &original)
	{
		this->_type = original._type;
		*(this->_brain) = *(original._brain);
	}
	return *this;
}

/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void Animal::makeSound(void) const
{
	std::cout	<<Y<<"<Animals dont make sounds!>"
				<<X<<std::endl;
}

std::string	Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::haveIdea(std::string idea)
{
	std::cout<<Y<<_type<<" has a new idea!"<<std::endl;
	_brain->setIdea(idea);
}
void	Animal::think(void)
{
	_brain->printIdeas();
}
