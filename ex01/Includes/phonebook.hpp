/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/19 16:35:27 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include "../Includes/contact.hpp"

class PhoneBook{

	public:
	PhoneBook();
	PhoneBook(int Nbr);

	void		set_flags();
	void		addContact();
	void		update_name();
	void		update_nickname();
	void		update_number();
	void		update_secret();
	void		incrementContactNumber();
	void		update_flags();
	void		DisplayContactInfoIndex(int nb);
	bool		ContactAtIndexExist(int nb);
	void		Search();
	std::string get_contact_name(int index) const;

	private:
	int			ContactNbr;
	int			InitFlags[8];
	Contact		Contacts[8];
};

#endif
