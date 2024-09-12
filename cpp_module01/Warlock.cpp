/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:09:38 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:22:27 by mcarneir         ###   ########.fr       */
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
	for (std::map<std::string, ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();
}

void Warlock::learnSpell(ASpell *spell)
{
	if(spell)
	{
		if(_spellBook.find(spell->getName()) == _spellBook.end())
			_spellBook[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(std::string name)
{
	if (_spellBook.find(name) != _spellBook.end())
		_spellBook.erase(_spellBook.find(name));
}

void Warlock::launchSpell(std::string name, const ATarget &target)
{
	if (_spellBook.find(name) != _spellBook.end())
		_spellBook[name]->launch(target);
}