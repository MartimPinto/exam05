/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:57:37 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 14:27:50 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::TargetGenerator(const TargetGenerator &src)
{
	*this = src;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &src)
{
	_targets = src._targets;
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
	{
		_targets[target->getType()] = target->clone();
	}
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	std::map<std::string, ATarget *>::iterator it = _targets.find(type);
	if (it != _targets.end())
	{
		delete it->second;
		_targets.erase(it);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &target)
{
	ATarget *tmp = NULL;
	if (_targets.find(target) != _targets.end())
		tmp = _targets[target];
	return tmp;
}