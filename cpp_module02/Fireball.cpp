/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:30:49 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:33:42 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp"){}

ASpell *Fireball::clone() const
{
	return (new Fireball());
}

Fireball::~Fireball(){}
