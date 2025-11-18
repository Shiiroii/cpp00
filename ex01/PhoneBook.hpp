/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:17:17 by liulm             #+#    #+#             */
/*   Updated: 2025/11/18 18:55:04 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		virtual	~PhoneBook();
		void	start();
		void	AddContact();
		void	SearchContact();
	private:
		Contact	contacts[8];
		int		numContacts;
};

#endif
