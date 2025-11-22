/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:17:12 by liulm             #+#    #+#             */
/*   Updated: 2025/11/22 14:27:14 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->nbContacts = 0;
}

PhoneBook::~PhoneBook()
{
}

// void	PhoneBook::Start(void)
// {
// 	std::cout << "|-                   -Phone Book-                    -|" << std::endl;
// 	std::cout << "|-    Enter your command: [ADD], [SEARCH], [EXIT]    -|" << std::endl;
// }

void	PhoneBook::addContact()
{
	int	i;
	int	max;


	i = 0;
	if (this->nbContacts < 8)
	{
		if (this->contacts[this->nbContacts].addInfo(this->nbContacts + 1))
			this->nbContacts++;
	}
	else
	{
		while (i < 7)
		{
			this->contacts[i] = this->contacts[i + 1];
			i++;
		}
		this->contacts[7].addInfo(8);
	}
	if (this->nbContacts < 8)
		max = this->nbContacts;
	else
		max = 8;
	i = 0;
	while (i < max)
	{
		this->contacts[i].setIndex(i + 1);
		i++;
	}
}

// void	PhoneBook::addContact()
// {
// 	if (this->nbContacts== 8)
// 		std::cout << "# The directory is full !" << std::endl;
// 	else if (this->contacts[this->nbContacts].addInfo(this->nbContacts + 1))
// 		this->nbContacts++;
// }

void	PhoneBook::showHeader()
{
	int	i;

	i = 0;
	std::cout << "|=====================================================|" << std::endl;
	std::cout << "|-    Index   | First Name |  Last Name |  Nickname  -|" << std::endl;
	std::cout << "|=====================================================|" << std::endl;
	while (i < this->nbContacts)
	{
		this->contacts[i].showPage();
		i++;
	}
	std::cout << "|=====================================================|" << std::endl;
}

void	PhoneBook::searchContact()
{
	int	i;

	if (this->nbContacts == 0)
		std::cout << "|-              The PhoneBook is empty!              -|" << std::endl;
	else
	{
		this->showHeader();
		std::cout << "|-      Enter index to display info or 0 to quit.    -|" << std::endl;
		while (!(std::cin >> i) || (i < 0 || i > this->nbContacts))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "|-                  Invalid Index!                   -|" << std::endl;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (i > 0)
			this->contacts[i - 1].displayContact();
	}
}
