/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:56:43 by liulm             #+#    #+#             */
/*   Updated: 2025/11/18 18:52:33 by liulm            ###   ########.fr       */
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

Contact::Contact()
{
	int i;

	i = First_Name;
	while (i <= Darkest_Secret)
	{
		this->infos[i] = std::string();
		i++;
	}
}

//Contact::~Contact()
//{
//}

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

void Contact::show_page()
{
	int	i;

	i = First_Name;
	std::cout << "|" << std::setw(5) << this->index;
	while ( i <= Nickname)
	{
		std::cout << "|";
		if (this->infos[i].length() > 5)
			std::cout << this->infos[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(5) << this->infos[i];
		i++;
	}
	std::cout << "|" << std::endl;
}

void Contact::display_contact()
{
	int	i;

	i = 0;
	std::cout << "|- Contact : [" << this->index <<  "] -|" << std::endl;
	while (i <= Darkest_Secret)
	{
		std::cout << Contact::section[i] << ":";
		std::cout << this->infos[i] << std::endl;
		i++;
	}
}
