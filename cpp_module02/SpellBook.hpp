/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:29:58 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 14:13:46 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include <map>

#pragma once
class SpellBook
{
	private:
			std::map<std::string, ASpell *> _spellBook;
			SpellBook(const SpellBook &src);
			SpellBook &operator=(const SpellBook &src);
	public:	
			SpellBook();
			~SpellBook();
			void learnSpell(ASpell *spell);
			void forgetSpell(std::string const &name);
			ASpell *createSpell(std::string const &name);
};