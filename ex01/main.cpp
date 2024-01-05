/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:21:32 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/05 13:48:38 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"

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
			MyPhoneBook.AddContact();
		else if (Line == "SEARCH")
			MyPhoneBook.Search();
		else
			std::cout << "Invalid Input. Please try again :" << std::endl;
		display_main();
		std::getline(std::cin, Line);
	}
	return 0;
}
