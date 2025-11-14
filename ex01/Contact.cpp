/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:56:43 by liulm             #+#    #+#             */
/*   Updated: 2025/11/14 15:54:11 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	Contact::add_info(int i)
{
	this->index = i;
	int j;

	j = First_Name;
	while (j <= Darkest_Secret)
	{
		std::cout << this->infos[j] << std::endl;
		
		i++;
	}
}
