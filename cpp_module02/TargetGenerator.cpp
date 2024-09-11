/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:15:39 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/11 12:57:30 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::TargetGenerator(const TargetGenerator &src)
{
	*this = src;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &rhs)
{
	_targets = rhs._targets;
	return *this;
}

TargetGenerator::~TargetGenerator()
{
	for(std::map<std::string, ATarget*>::iterator it = _targets.begin(); it != _targets.end(); ++it)
		delete it->second;
	_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		_targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
	std::map<std::string, ATarget*>::iterator it = _targets.find(name);
	if (it != _targets.end())
	{
		delete it->second;
		_targets.erase(it);
		
	}
}

ATarget *TargetGenerator::createTarget(std::string const &name)
{
	ATarget *tmp = NULL;
	if (_targets.find(name) != _targets.end())
		tmp = _targets[name];
	return (tmp);
}