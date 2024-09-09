/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:04:16 by mcarneir          #+#    #+#             */
/*   Updated: 2024/09/09 15:29:24 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
			Dummy();
			ATarget *clone() const;
			~Dummy();
};