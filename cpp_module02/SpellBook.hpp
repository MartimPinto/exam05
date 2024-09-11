/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:39:28 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/11 13:02:48 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private:
			SpellBook(const SpellBook &src);
			SpellBook &operator=(const SpellBook &rhs);
			std::map<std::string, ASpell *> _spellBook;

	public:
			SpellBook();
			~SpellBook();
			void learnSpell(ASpell *spell);
			void forgetSpell(std::string const &name);
			ASpell* createSpell(std::string const &name);
			
};