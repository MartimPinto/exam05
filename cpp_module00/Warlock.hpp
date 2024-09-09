/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:01:12 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/09 12:27:59 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Warlock
{
	private:
			std::string _name;
			std::string _title;
			Warlock();
			Warlock(const Warlock &src);
			Warlock &operator=(const Warlock &rhs);
	public:
			Warlock(std::string name, std::string title);
			const std::string &getName() const;
			const std::string &getTitle() const;
			void setTitle(const std::string &str);
			void introduce() const;
			~Warlock();
	
};