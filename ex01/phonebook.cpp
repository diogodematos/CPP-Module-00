/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:34:33 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/05 12:13:51 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int argc, char **argv)
{
	//Phonebook	yellow;
	std::string	input;
	
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Wrong Arguments" << std::endl;
		return (0);
	}
	std::cout << "Welcome to PhoneBook! " << std::endl;
	while (1)
	{
		std::cout << "What you want to do? (ADD) | (SEARCH) | (EXIT)" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			continue ;
		else if (input == "SEARCH")
			continue ;
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Wrong Command!" << std::endl;
	}
	return (0);
}