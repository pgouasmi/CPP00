/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/10 11:44:35 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "./Contact.hpp"

class PhoneBook{

	public:
	PhoneBook();
	PhoneBook(int Nbr);
	void		AddContact();
	void		Search();

	private:
	int			ContactNbr;
	int			Flags[8];
	Contact		Contacts[8];

	void		SetFirstName();
	void		SetLastName();
	void		SetNickname();
	void		SetNumber();
	void		SetSecret();
	void		InitFlags();
	void		IncrementContactNumber();
	void		UpdateFlags();
	void		DisplayContactInfoIndex(int nb);
	void		DisplayAllInfo(int nbr) const;
	void		DisplayContactInfoArray(int ContactIndex);
	void		FormatOutput(std::string ToDisplay);
	bool		ContactAtIndexExist(int nb) const;
	std::string GetContactName(int index) const;
};

#endif
