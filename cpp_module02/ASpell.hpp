/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:54:33 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:20:01 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
				std::string _name;
				std::string _effects;
	public:
			ASpell(const std::string &name, const std::string &effects);
			ASpell(const ASpell &src);
			ASpell &operator=(const ASpell &rhs);
			std::string getName() const;
			std::string getEffects() const;
			virtual ~ASpell();
			virtual ASpell* clone() const = 0;
			void launch(const ATarget &target) const;
		
};