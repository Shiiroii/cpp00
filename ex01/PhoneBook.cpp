/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:17:12 by liulm             #+#    #+#             */
/*   Updated: 2025/11/15 12:39:15 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->numContacts = 0;
}

void	PhoneBook::start(void)
{
	std::cout << "|-                -Phone Book-                 -|" << std::endl;
	std::cout << "|- Enter your command: [ADD], [SEARCH], [EXIT] -|" << std::endl;
}

void	PhoneBook::AddContact(void)
{
	if (numContacts == 8)
		std::cout << "|-          -The Phone Book is full!-          -|" << std::endl;
	else if (this->contacts[this->numContacts].add_info(this->numContacts + 1))
		this->numContacts++;
}
