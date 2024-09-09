/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:28:40 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/09 14:57:09 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string type): _type(type){}

ATarget::ATarget(const ATarget &src)
{
	*this = src;
}

ATarget &ATarget::operator=(const ATarget &rhs)
{
	this->_type = rhs.getType();
	return *this;
}

const std::string &ATarget::getType() const
{
	return this->_type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::~ATarget(){}

