/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:17:17 by liulm             #+#    #+#             */
/*   Updated: 2025/11/22 15:43:47 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <limits>
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		virtual	~PhoneBook();

		// void	Start();
		void	addContact();
		void	searchContact();
		void	showHeader();
	private:
		Contact	contacts[8];
		int		nbContacts;
};

#endif
