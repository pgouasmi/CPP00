/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:14 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/19 15:52:59 by pgouasmi         ###   ########.fr       */
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
	void	SetName(std::string str);
	void	SetNickname(std::string str);
	void	SetNumber(std::string str);
	void	SetSecret(std::string str);

	std::string	GetName() const;
	std::string	GetNickname() const;
	std::string	GetNumber() const;
	std::string	GetSecret() const;

	public:
	std::string Name;

	private:
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;
};

#endif
