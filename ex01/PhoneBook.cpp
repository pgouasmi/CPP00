/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:51 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/10 11:44:32 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	ContactNbr = 0;
	this->InitFlags();
}

PhoneBook::PhoneBook(int Nbr)
{
	ContactNbr = Nbr;
	this->InitFlags();
}

std::string PhoneBook::GetContactName(int index) const
{
	std::cout << this->ContactNbr << std::endl;
	if (index < 0 || index > 7)
		return ("PRBL INDEX 1");
	else if (index > this->ContactNbr)
		return ("PRBL INDEX 2");
	else
	{
		std::cout << "in get contact Name, Name[" << index << "] " << this->Contacts[index].GetFirstName() << std::endl;
		return this->Contacts[index].GetFirstName();
	}
}

void	PhoneBook::IncrementContactNumber()
{
	this->ContactNbr++;
	if (this->ContactNbr == 8)
		ContactNbr = 0;
}

void	PhoneBook::UpdateFlags()
{
	this->Flags[this->ContactNbr] = 1;
}

void	PhoneBook::AddContact()
{
	this->SetFirstName();
	this->SetLastName();
	this->SetNickname();
	this->SetNumber();
	this->SetSecret();
	std::cout << "\nContact successfully added !\n" << std::endl;
	this->UpdateFlags();
	this->IncrementContactNumber();
}

void	PhoneBook::SetSecret()
{
	std::string Line;

	std::cout << "\nType " << this->Contacts[this->ContactNbr].GetFirstName() << "'s Darkest Secret :" << std::endl;
	std::getline(std::cin, Line);
	while (1)
	{
		if (std::cin.eof())
			std::exit(1);
		else if (Line.empty())
			std::cout << "Input needed, please type again :" << std::endl;
		else
			break ;
		std::getline(std::cin, Line);
	}
	this->Contacts[this->ContactNbr].SetSecret(Line);
}

void	PhoneBook::SetNumber()
{
	std::string Line;

	std::cout << "\nType " << this->Contacts[this->ContactNbr].GetFirstName() << "'s Phone Number :" << std::endl;
	std::getline(std::cin, Line);
	while (1)
	{
		if (std::cin.eof())
			std::exit(1);
		else if (Line.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "Phone number must be digits only. Please try again." << std::endl;
		else if (Line.empty())
			std::cout << "Input needed, please type again :" << std::endl;
		else
			break ;
		std::getline(std::cin, Line);
	}
	this->Contacts[this->ContactNbr].SetNumber(Line);
}

void	PhoneBook::SetNickname()
{
	std::string Line;

	std::cout << "\nType " << this->Contacts[this->ContactNbr].GetFirstName() << "'s Nickname :" << std::endl;
	while (1)
	{
		std::getline(std::cin, Line);
		if (std::cin.eof())
			std::exit(1);
		else if (Line.empty())
			std::cout << "Input needed, please type again :" << std::endl;
		else
			break ;
	}
	this->Contacts[this->ContactNbr].SetNickname(Line);
}

void	PhoneBook::SetFirstName()
{
	std::string Line;

	std::cout << "Type your new contact's first Name :" << std::endl;
	while (1)
	{
		std::getline(std::cin, Line);
		if (std::cin.eof())
			std::exit(1);
		else if (Line.empty())
			std::cout << "Input needed, please type again :" << std::endl;
		else
			break ;
	}
	this->Contacts[this->ContactNbr].SetFirstName(Line);
}

void	PhoneBook::SetLastName()
{
	std::string Line;

	std::cout << "\nType " << this->Contacts[this->ContactNbr].GetFirstName() << "'s Last Name :" << std::endl;
	while (1)
	{
		std::getline(std::cin, Line);
		if (std::cin.eof())
			std::exit(1);
		else if (Line.empty())
			std::cout << "Input needed, please type again :" << std::endl;
		else
			break ;
	}
	this->Contacts[this->ContactNbr].SetLastName(Line);
}

void	PhoneBook::InitFlags()
{
	int	i = 0;

	while(i < 8)
	{
		this->Flags[i] = 0;
		i++;
	}
}

void	PhoneBook::DisplayContactInfoIndex(int nb)
{
	std::cout << "\nDisplaying info for Contact number " << nb << " :" << std::endl;
	std::cout << "First Name: " << this->Contacts[nb].GetFirstName() << std::endl;
	std::cout << "Last Name: " << this->Contacts[nb].GetLastName() << std::endl;
	std::cout << "Nickname: " << this->Contacts[nb].GetNickname() << std::endl;
	std::cout << "Number: " << this->Contacts[nb].GetNumber() << std::endl;
	std::cout << "Secret: " << this->Contacts[nb].GetSecret() << "\n" << std::endl;
}

void	PhoneBook::FormatOutput(std::string ToDisplay)
{
	std::size_t	len = ToDisplay.length();
	std::cout << "|" << std::flush;
	if (len >= 10)
		std::cout << ToDisplay.substr(0, 9) << "." << std::flush;
	else
		std::cout << std::setw(10) << ToDisplay << std::flush;
}

void	PhoneBook::DisplayContactInfoArray(int ContactIndex)
{
	std::ostringstream s;
	s << ContactIndex;
	FormatOutput(s.str());
	FormatOutput(this->Contacts[ContactIndex].GetFirstName());
	FormatOutput(this->Contacts[ContactIndex].GetLastName());
	FormatOutput(this->Contacts[ContactIndex].GetNickname());
	std::cout << "|" << std::endl;
}

void	PhoneBook::Search()
{
	std::string s;

	std::cout << std::endl;
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|Index     |1st Name  |Last Name |Nickname  |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for(int i = 0; i < 8; i++)
	{
		if (this->Flags[i])
			this->DisplayContactInfoArray(i);
		else
			std::cout << "|         " << i << "|     EMPTY|     EMPTY|     EMPTY|" << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|\n" << std::endl;
	std::string Line;
	int nbr;
	while (1)
	{
		std::cout << "Type \"MENU\" to go back to main menu" << std::endl;
		std::cout << "Or type the Index of the contact you want to display :" << std::endl;
		std::getline(std::cin, Line);
		if (std::cin.eof())
			std::exit(1);
		else if (Line.empty())
			std::cout << "Empty input. Please try again" << std::endl;
		else if (Line == "MENU")
		{
			std::cout << std::endl;
			return ;
		}
		else if (Line.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "Index must be digits only. Please try again." << std::endl;
		else
		{
			std::stringstream cast(Line);
			cast >> nbr;
			if (nbr < 0 || nbr > 7 || !this->Flags[nbr])
				std::cout << "Invalid Input.\nThe index must be positive, not greater than 7 and must correspond to an existing Contact.\n" << std::endl;
			else
				break ;
		}
	}
	this->DisplayContactInfoIndex(nbr);
}
