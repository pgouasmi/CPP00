/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:29:52 by pgouasmi          #+#    #+#             */
/*   Updated: 2024/01/05 13:10:44 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	char c;
	for(int j = 1; j < argc; ++j)
	{
		for (size_t i = 0; argv[j][i]; i++)
		{
			c = std::toupper(argv[j][i]);
			std::cout << c << std::flush;
		}
	}
	std::cout << std::endl;
	return 0;
}
