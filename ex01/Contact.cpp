/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:56:43 by liulm             #+#    #+#             */
/*   Updated: 2025/11/22 14:47:54 by lionelulm        ###   ########.fr       */
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

Contact::~Contact()
{
}

void	Contact::setIndex(int i)
{
	this->index = i;
}

bool	Contact::addInfo(int i)
{
	int j;
	size_t totalLen = 0;

	j = First_Name;
	this->index = i;
	while (j <= Darkest_Secret)
	{
		std::cout << this->section[j] << std::endl;
		if (!std::getline(std::cin, this->infos[j]))
			return (0);
		else if (this->infos[j].empty())
		{
			std::cout << "La ligne est vide !" << std::endl;
			return (0);
		}
		j++;
	}
	j = First_Name;
	while (j <= Darkest_Secret)
	{
		totalLen += this->infos[j].length();
		j++;
	}
	if (totalLen == 0)
	{
		std::cout << "|-                  -Empty contact-                  -|" << std::endl;
		return (0);
	}
	std::cout << "|-                  -Contact added!-                 -|" << std::endl;
	return (1);
}

void Contact::showPage()
{
	int	i;

	i = First_Name;
	std::cout << "|-" << std::setw(12) << this->index;
	while ( i <= Nickname)
	{
		std::cout << "|";
		if (this->infos[i].length() > 12)
			std::cout << this->infos[i].substr(0, 11) << ".";
		else
			std::cout << std::setw(12) << this->infos[i];
		i++;
	}
	std::cout << "-|" << std::endl;
}

void Contact::displayContact()
{
	int	i;

	i = 0;
	std::cout << "|-                  Contact : [" << this->index <<  "]                    -|" << std::endl;
	while (i <= Darkest_Secret)
	{
		std::cout << Contact::section[i] << ":";
		std::cout << this->infos[i] << std::endl;
		i++;
	}
}
