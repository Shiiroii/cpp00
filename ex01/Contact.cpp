/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:56:43 by liulm             #+#    #+#             */
/*   Updated: 2025/11/15 12:33:12 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::section[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

bool	Contact::add_info(int i)
{
	int j;
	size_t totalLen = 0;

	j = First_Name;
	this->index = i;
	while (j <= Darkest_Secret)
	{
		std::cout << this->section[j] << std::endl;
		std::getline(std::cin, this->infos[j]);
		j++;
	}
	j = First_Name;
	while (i <= Darkest_Secret)
	{
		totalLen += this->infos[j].length();
		j++;
	}
	if (totalLen == 0)
	{
		std::cout << "|-               -Empty contact-               -|" << std::endl;
		return (0);
	}
	std::cout << "|-               -Contact added!-              -|" << std::endl;
	return (1);
}
