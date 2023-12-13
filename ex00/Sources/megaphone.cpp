/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:29:52 by pgouasmi          #+#    #+#             */
/*   Updated: 2023/12/13 14:19:43 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	for(char **ptr = ++argv; *ptr != NULL; ++ptr)
	{
		std::string str = *ptr;
		std::transform(str.begin(), str.end(),
						str.begin(), toupper);
		std::cout << str << std::flush;
	}
	std::cout << std::endl;
	return 0;
}