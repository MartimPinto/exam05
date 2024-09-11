/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:08:01 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/11 12:54:44 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
			std::map<std::string, ATarget*> _targets;
			TargetGenerator(const TargetGenerator &src);
			TargetGenerator &operator=(const TargetGenerator &rhs);

	public:
			TargetGenerator();
			~TargetGenerator();
			void learnTargetType(ATarget *target);
			void forgetTargetType(std::string const &name);
			ATarget* createTarget(std::string const &name);	
};