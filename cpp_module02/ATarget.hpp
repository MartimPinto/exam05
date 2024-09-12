/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:04:52 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:20:33 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ASpell.hpp"


class ASpell;

class ATarget
{
		protected:
					std::string _type;
		public:
				ATarget(const std::string &type);
				ATarget(const ATarget &src);
				ATarget &operator=(const ATarget &rhs); 
				const std::string &getType() const;
				virtual ATarget *clone() const = 0;
				virtual ~ATarget();
				void getHitBySpell(const ASpell &spell) const;		
};