/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/12 13:20:43 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <sstream>
#include "./Contact.hpp"

class PhoneBook{

	public:
	PhoneBook();
	PhoneBook(int Nbr);
	int	AddContact();
	int		Search();

	private:
	int			ContactNbr;
	int			Flags[8];
	Contact		Contacts[8];

	int		SetFirstName();
	int		SetLastName();
	int		SetNickname();
	int		SetNumber();
	int		SetSecret();
	void		InitFlags();
	void		IncrementContactNumber();
	void		UpdateFlags();
	void		DisplayContactInfoIndex(int nb);
	void		DisplayAllInfo(int nbr) const;
	void		DisplayContactInfoArray(int ContactIndex);
	void		FormatOutput(std::string ToDisplay);
	std::string GetContactName(int index) const;
};

#endif
