/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:58:53 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 12:02:52 by mcarneir         ###   ########.fr       */
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
			Warlock &operator=(const Warlock &src);
	public:
			Warlock(const std::string &name, const std::string &title);
			~Warlock();
			const std::string &getName() const;
			const std::string &getTitle() const;
			void setTitle(const std::string &title);
			void introduce() const;
			
			
	
};