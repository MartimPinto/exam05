/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:44:57 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:48:27 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter"){}

ASpell *Polymorph::clone() const 
{
	return (new Polymorph());
}

Polymorph::~Polymorph(){}

