/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:14 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/20 13:53:40 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <algorithm>

class Contact
{
	public:
	Contact();
	std::string	GetFirstName() const;
	std::string GetLastName() const;
	std::string	GetNickname() const;
	std::string	GetNumber() const;
	std::string	GetSecret() const;
	void	SetFirstName(std::string str);
	void	SetLastName(std::string str);
	void	SetNickname(std::string str);
	void	SetNumber(std::string str);
	void	SetSecret(std::string str);

	private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
};

#endif
