/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:21:32 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/12 13:34:56 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"

int	ParseUnknownChar(std::string Line)
{
	for (int i = 0; Line[i] != '\0'; ++i)
	{
		if (!isprint(Line[i]))
				return (1);
	}
	return (0);
}

int	ParseOnlyWs(std::string Line)
{
	for (int i = 0; Line[i] ; ++i)
	{
		if (!std::isspace(Line[i]))
			return 0;
	}
	return 1;
}

void	display_main()
{
	std::cout << "Type \"ADD\" to create a new contact" << std::endl;
	std::cout << "Type \"SEARCH\" to display all the contacts saved" << std::endl;
	std::cout << "Type \"EXIT\" to exit the program\n" << std::endl;
}
int	main()
{
	std::string Line;
	PhoneBook MyPhoneBook(0);

	std::cout << "\\o/ Welcome to My Awesome PhoneBook \\o/\n" << std::endl;
	display_main();
	std::getline(std::cin, Line);
	while (Line != "EXIT" && !std::cin.eof())
	{
		if (Line == "ADD")
		{
			if (MyPhoneBook.AddContact())
				return (1);
		}
		else if (Line == "SEARCH")
		{
			if (MyPhoneBook.Search() == 1)
				return (1);
		}
		else
			std::cout << "Invalid Input. Please try again :" << std::endl;
		display_main();
		std::getline(std::cin, Line);
	}
	return 0;
}
