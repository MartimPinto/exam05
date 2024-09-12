/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:03:05 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:11:40 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const std::string &name, const std::string &title): _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." <<std::endl;
}

Warlock::Warlock(const Warlock &src)
{
	*this = src;
}

Warlock &Warlock::operator=(const Warlock &src)
{
	this->_name = src.getName();
	this->_title = src.getTitle();
	return *this;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" <<std::endl;
}

const std::string &Warlock::getName() const 
{
	return this->_name;
}

const std::string &Warlock::getTitle() const
{
	return this->_title;
}

void Warlock::setTitle(const std::string &title)
{
	this->_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}