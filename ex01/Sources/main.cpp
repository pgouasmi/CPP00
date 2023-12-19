/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:21:32 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/19 22:23:23 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/phonebook.hpp"
#include "../Includes/contact.hpp"

void	display_main()
{
	std::cout << "Type \"ADD\" to add a new contact" << std::endl;
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
	while (Line != "EXIT")
	{
		if (Line == "ADD")
			MyPhoneBook.addContact();
		if (Line == "SEARCH")
			MyPhoneBook.Search();
		display_main();
		std::getline(std::cin, Line);
	}
	// std::cout << MyPhoneBook.get_contact_name(0) << std::endl;
	return 0;
}
