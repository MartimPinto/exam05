/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:09:38 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/09 12:28:37 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &src)
{
	*this = src;
}

Warlock &Warlock::operator=(const Warlock &rhs)
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return *this;
}

const std::string &Warlock::getName() const
{
	return this->_name;
}

const std::string &Warlock::getTitle() const
{
	return this->_title;
}

void Warlock::setTitle(const std::string &str)
{
	this->_title = str;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}