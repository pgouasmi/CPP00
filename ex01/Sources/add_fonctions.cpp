/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_fonctions.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:06:11 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/13 17:10:17 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../Includes/phonebook.hpp"

static void	update_name(Contact NewContact)
{
	std::string Line;

	std::cout << "Type the name of the new contact :" << std::endl;
	std::getline(std::cin, Line);
	NewContact.setName(Line);
	std::cout << std::endl;
}

static void	update_nickname(Contact NewContact)
{
	std::string Line;

	std::cout << "Type the nickname of the new contact :" << std::endl;
	std::getline(std::cin, Line);
	NewContact.setNickname(Line);
	std::cout << std::endl;
}

static void	update_number(Contact NewContact)
{
	std::string Line;

	std::cout << "Type the phone number of the new contact :" << std::endl;
	std::getline(std::cin, Line);
	NewContact.setNumber(Line);
	std::cout << std::endl;
}

static void	update_secret(Contact NewContact)
{
	std::string Line;

	std::cout << "Type this contact's darkest secret :" << std::endl;
	std::getline(std::cin, Line);
	NewContact.setSecret(Line);
	std::cout << std::endl;
}

void	add_contact(PhoneBook *MyPhoneBook)
{
	Contact NewContact;

	MyPhoneBook->addContact(NewContact);
	update_name(NewContact);
	update_nickname(NewContact);
	update_number(NewContact);
	update_secret(NewContact);
	std::cout << "Contact succesfully added !\n" << std::endl;
}