/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:50:52 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:52:14 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

class BrickWall: public ATarget
{
	public:
			BrickWall();
			~BrickWall();
			ATarget *clone() const;
};