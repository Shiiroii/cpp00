/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:52:26 by liulm             #+#    #+#             */
/*   Updated: 2025/11/22 14:21:30 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	bool		launch;

	std::cout << "|-                   -Phone Book-                    -|" << std::endl;
	std::cout << "|-    Enter your command: [ADD], [SEARCH], [EXIT]    -|" << std::endl;
	launch = true;
	while (launch)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
		{
			std::cout << "|-                 Closing PhoneBook                 -|" << std::endl;
			launch = false;
		}
	}
	return (0);
}
