/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/13 17:14:59 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

//CLASSES
class Contact
{
	//Methods
	public: void setName(std::string NewName)
	{
		this->Name = NewName;
	}

	public: void setNickname(std::string NewNickname)
	{
		this->Nickname = NewNickname;
	}

	public: void setNumber(std::string NewNumber)
	{
		this->PhoneNumber = NewNumber;
	}

	public: void setSecret(std::string Secret)
	{
		this->DarkestSecret = Secret;
	}

	//Attributes
	std::string Name;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
};

class PhoneBook
{

	//Methods
	public: void addContact(Contact NewContact)
	{
		if (ContactsNbr < 8)
			Contacts[ContactsNbr++] = NewContact;
		else
		{
			for (size_t i = 0; i < 7; i++)
				Contacts[i + 1] = Contacts[i];
			Contacts[7] = NewContact;
		}
	}

	//Attributes
	class Contact Contacts[8];
	int ContactsNbr;
};

class Add
{
	public: void add_contact(PhoneBook *MyPhoneBook);
};