/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:52:26 by liulm             #+#    #+#             */
/*   Updated: 2025/11/18 18:56:30 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	bool		launch;

	phonebook.start();
	launch = true;
	while (launch)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.AddContact();
		else if (command == "SEARCH")
			phonebook.SearchContact();
		else if (command == "EXIT")
		{
			std::cout << "|-         Closing PhoneBook         -|" << std::endl;
			launch = false;
		}
	}
	return (0);
}
