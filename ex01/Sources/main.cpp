/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:21:32 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/20 13:43:17 by pgouasmi         ###   ########.fr       */
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
/*
to do
-CTRL D pour chaque getline
-Ajouter attribut last name
-Utiliser bon nommage variables, attributs et methodes
-
*/
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
		if (Line == "SEARCH")
			MyPhoneBook.Search();
		display_main();
		std::getline(std::cin, Line);
	}
	// std::cout << MyPhoneBook.get_contact_name(0) << std::endl;
	return 0;
}
