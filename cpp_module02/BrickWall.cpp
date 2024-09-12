/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:54:31 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 13:29:03 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall"){}

ATarget *BrickWall::clone() const 
{
	return (new BrickWall());
}

BrickWall::~BrickWall(){}