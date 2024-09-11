/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:45:31 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/11 13:03:10 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::SpellBook(const SpellBook &src)
{
	*this = src;
}

SpellBook &SpellBook::operator=(const SpellBook &rhs)
{
	_spellBook = rhs._spellBook;
	return *this;
}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		_spellBook[spell->getName()] = spell->clone();
	}
}

void SpellBook::forgetSpell(std::string const &name)
{
	std::map<std::string, ASpell *>::iterator it = _spellBook.find(name);
	if (it != _spellBook.end())
	{
		delete it->second;
		_spellBook.erase(it);
	}
}

ASpell *SpellBook::createSpell(std::string const &name)
{
	ASpell *tmp = NULL;
	if (_spellBook.find(name) != _spellBook.end())
		tmp = _spellBook[name];
	return (tmp);
}