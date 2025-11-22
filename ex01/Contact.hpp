/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:57:03 by liulm             #+#    #+#             */
/*   Updated: 2025/11/21 15:51:08 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact();
		virtual	~Contact();

		bool	addInfo(int i);
		void	showPage();
		void	displayContact();
		void	setIndex(int i);
	private:
		enum Field
		{
			First_Name = 0,
			Last_Name,
			Nickname,
			Phone_Number,
			Darkest_Secret
		};
		int					index;
		std::string			infos[5];
		static std::string	section[5];
};

#endif
