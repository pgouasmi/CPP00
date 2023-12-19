/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:22:43 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/19 15:52:47 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/contact.hpp"

Contact::Contact() {}

void	Contact::SetName(std::string str)
{
	this->Name = str;
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
std::string	Contact::GetName() const
{
	return Name;
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
