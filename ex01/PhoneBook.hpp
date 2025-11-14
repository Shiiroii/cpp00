/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:17:17 by liulm             #+#    #+#             */
/*   Updated: 2025/11/14 15:35:28 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	public:
		PhoneBook();
		virtual	~PhoneBook();
		void	PhoneBook::start(void);
		void	PhoneBook::AddContact(void);
	private:
		Contact	contacts[8];
		int		numContacts;
};

#endif
