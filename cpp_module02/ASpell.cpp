/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:41:43 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/09 14:55:55 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects){}

ASpell::ASpell(const ASpell &src)
{
	*this = src;
}

ASpell &ASpell::operator=(const ASpell &rhs)
{
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();
	return *this;
}

std::string ASpell::getName() const 
{
	return this->_name;
}

std::string ASpell::getEffects() const
{
	return this->_effects;
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}

ASpell::~ASpell(){}
