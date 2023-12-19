/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:51 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/19 22:45:31 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/contact.hpp"
#include "../Includes/phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->set_flags();
}

PhoneBook::PhoneBook(int Nbr)
{
	ContactNbr = Nbr;
	this->set_flags();
}

std::string PhoneBook::get_contact_name(int index) const
{
	std::cout << this->ContactNbr << std::endl;
	if (index < 0 || index > 7)
		return ("PRBL INDEX 1");
	else if (index > this->ContactNbr)
		return ("PRBL INDEX 2");
	else
	{
		std::cout << "in get contact Name, Name[" << index << "] " << this->Contacts[0].Name << std::endl;
		return this->Contacts[index].GetName();
	}
}

void	PhoneBook::incrementContactNumber()
{
	this->ContactNbr++;
	if (this->ContactNbr == 8)
		ContactNbr = 0;
}

void	PhoneBook::update_flags()
{
	this->InitFlags[this->ContactNbr] = 1;
}

void	PhoneBook::addContact()
{
	this->update_name();
	this->update_nickname();
	this->update_number();
	this->update_secret();
	std::cout << "Contact successfully added !\n" << std::endl;
	this->update_flags();
	this->incrementContactNumber();
}

void	PhoneBook::update_secret()
{
	std::string Line;

	std::cout << "Give secret :" << std::endl;
	std::getline(std::cin, Line);

	this->Contacts[this->ContactNbr].SetSecret(Line);
}

void	PhoneBook::update_number()
{
	std::string Line;

	std::cout << "Give number :" << std::endl;
	std::getline(std::cin, Line);
	while (Line.find_first_not_of("0123456789") != std::string::npos || Line == "")
	{
		std::cout << "Phone number must be digits only. Please try again." << std::endl;
		std::getline(std::cin, Line);
	}
	this->Contacts[this->ContactNbr].SetNumber(Line);
}

void	PhoneBook::update_nickname()
{
	std::string Line;

	std::cout << "Give nickame :" << std::endl;
	std::getline(std::cin, Line);
	this->Contacts[this->ContactNbr].SetNickname(Line);
}

void	PhoneBook::update_name()
{
	std::string Line;

	std::cout << "Give name :" << std::endl;
	std::getline(std::cin, Line);
	this->Contacts[this->ContactNbr].SetName(Line);
}

void	PhoneBook::set_flags()
{
	int	i = 0;

	while(i < 8)
	{
		this->InitFlags[i] = 0;
		i++;
	}
}

void	PhoneBook::DisplayContactInfoIndex(int nb)
{
	if (nb > 7 || nb < 0)
	{
		std::cout << "Invalid Index" << std::endl;
		return ;
	}
	if (!this->InitFlags[nb])
	{
		std::cout << "No Contact at this index" << std::endl;
		return ;
	}
	std::cout << "Displaying info for Contact number " << nb << " :" << std::endl;
	std::cout << "Name :" << this->Contacts[nb].GetName() << std::endl;
	std::cout << "Nickname :" << this->Contacts[nb].GetNickname() << std::endl;
	std::cout << "Number :" << this->Contacts[nb].GetNumber() << std::endl;
	std::cout << "Secret :" << this->Contacts[nb].GetSecret() << "\n" << std::endl;
}

void	PhoneBook::Search()
{
	std::string s;
	std::cout << std::endl;
	std::cout << " _______________________________________" << std::endl;
	std::cout << "|  Name   |Nickname |Phone nb | Secret  |" << std::endl;
	std::cout << "|_________|_________|_________|_________|" << std::endl;
	for(int i = 0; i < 8; i++)
	{
		if (this->InitFlags[i])
		{
			s = this->Contacts[i].GetName();
			s.insert(0, "|");
			if (s.length() > 9)
			{
				s.substr(0, 8);
				s.append(".|");
			}
			if (s.length() < 9)
			{
				for (int j = s.length(); j <= 9; j++)
					s.append(" ");
				s.append("|");
			}
			std::cout << s << std::endl;
		}
		else
			std::cout << "|  EMPTY  |  EMPTY  |  EMPTY  |  EMPTY  |" << std::endl;
		// std::cout << this->Contacts[i].GetName() << std::endl;
		// std::cout << this->Contacts[i].GetNickname() << "|" << std::endl;
		// std::cout << this->Contacts[i].GetNumber() << "|" << std::endl;
		// std::cout << this->Contacts[i].GetSecret() << "|" << std::endl;
	}
	std::cout << "|_________|_________|_________|_________|\n" << std::endl;
}
