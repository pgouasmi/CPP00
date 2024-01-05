/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:22:43 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/05 13:33:42 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact::Contact() {}

void	Contact::SetFirstName(std::string str)
{
	this->FirstName = str;
}

void	Contact::SetLastName(std::string str)
{
	this->LastName = str;
}

void	Contact::SetNickname(std::string str)
{
	Nickname = str;
}
void	Contact::SetNumber(std::string str)
{
	PhoneNumber = str;
}
void	Contact::SetSecret(std::string str)
{
	DarkestSecret = str;
}
std::string	Contact::GetFirstName() const
{
	return FirstName;
}

std::string	Contact::GetLastName() const
{
	return LastName;
}

std::string	Contact::GetNickname() const
{
	return Nickname;
}

std::string	Contact::GetNumber() const
{
	return PhoneNumber;
}

std::string	Contact::GetSecret() const
{
	return DarkestSecret;
}
