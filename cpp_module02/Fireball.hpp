/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:29:13 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:30:32 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

class Fireball: public ASpell
{
	public:
			Fireball();
			~Fireball();
			ASpell *clone() const;
};