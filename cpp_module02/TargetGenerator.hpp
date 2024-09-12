/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:52:01 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/12 13:57:12 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	private:
			std::map<std::string, ATarget *> _targets;
			TargetGenerator(const TargetGenerator &src);
			TargetGenerator &operator=(const TargetGenerator &src);
	public:
			TargetGenerator();
			~TargetGenerator();
			void learnTargetType(ATarget *target);
			void forgetTargetType(std::string const &type);
			ATarget* createTarget(std::string const &target);	
};