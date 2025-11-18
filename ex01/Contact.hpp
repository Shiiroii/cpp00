/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:57:03 by liulm             #+#    #+#             */
/*   Updated: 2025/11/18 18:57:48 by liulm            ###   ########.fr       */
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
		//virtual ~Contact();

		bool add_info(int i);
		void Contact::show_page();
		void Contact::display_contact();
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
