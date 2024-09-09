/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:01:12 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/09 15:58:57 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
			std::string _name;
			std::string _title;
			std::map<std::string, ASpell*> _spellBook;
			
			Warlock();
			Warlock(const Warlock &src);
			Warlock &operator=(const Warlock &rhs);
	public:
			Warlock(std::string name, std::string title);
			const std::string &getName() const;
			const std::string &getTitle() const;
			void setTitle(const std::string &str);
			void introduce() const;
			void learnSpell(ASpell *spell);
			void forgetSpell(std::string name);
			void launchSpell(std::string name, ATarget &target);
			~Warlock();
	
};