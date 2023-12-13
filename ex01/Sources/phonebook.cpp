/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:51 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/13 17:16:07 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/phonebook.hpp"

void	display_main()
{
	std::cout << "Type \"ADD\" to add a new contact" << std::endl;
	std::cout << "Type \"SEARCH\" to display all the contacts saved" << std::endl;
	std::cout << "Type \"EXIT\" to exit the program\n" << std::endl;
}

int	main()
{
	PhoneBook	MyPhoneBook;
	std::string Line;
	
	MyPhoneBook.ContactsNbr = 0;
	std::cout << "\\o/ Welcome to My Awesome PhoneBook \\o/\n" << std::endl;
	display_main();
	std::getline(std::cin, Line);
	while (Line != "EXIT")
	{
		if (Line == "ADD")
			Add.add_contact(&MyPhoneBook);
		std::cout << "new contact name : " << MyPhoneBook.Contacts[0].Name << std::endl;
		display_main();
		std::getline(std::cin, Line);
	}
	std::cout << MyPhoneBook.Contacts[0].Name << std::endl;
	return 0;
}