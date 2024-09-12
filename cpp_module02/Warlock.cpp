/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:09:38 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 14:30:26 by mcarneir         ###   ########.fr       */
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

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		_spellBook.learnSpell(spell);
	}
}

void Warlock::forgetSpell(std::string name)
{
	_spellBook.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, const ATarget &target)
{
	if (_spellBook.createSpell(name))
		_spellBook.createSpell(name)->launch(target);
}