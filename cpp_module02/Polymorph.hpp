/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:34:00 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:35:34 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

class Polymorph: public ASpell
{
	public:
			Polymorph();
			~Polymorph();
			ASpell *clone() const;
	
};