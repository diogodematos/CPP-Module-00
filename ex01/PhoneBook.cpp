/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:34:33 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/05 17:14:30 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void){}

void	Phonebook::setContact(int i){
	std::string	input;
	int	inputn;
	
	std::cout << "First name: ";
	std::cin >> input;
	contact[i].setFirstName(input);
	std::cout << "Last name: ";
	std::cin >> input;
	contact[i].setLastName(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	contact[i].setNickname(input);
	std::cout << "Phone Number: ";
	std::cin >> inputn;
	contact[i].setPhoneNumber(inputn);
	std::cout << "Dark Secret: ";
	std::cin >> input;
	contact[i].setDarkSecret(input);
}

void	Phonebook::search(void)
{
	if (this->i == 0)
		std::cout << "PhoneBook is empty" << std::endl;
	return ;
}

int	main(int argc, char **argv)
{
	Phonebook	yellow;
	std::string	input;
	
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Wrong Arguments" << std::endl;
		return (0);
	}
	yellow.i = 0;
	std::cout << "Welcome to PhoneBook! " << std::endl;
	while (1)
	{
		std::cout << "What you want to do? (ADD) | (SEARCH) | (EXIT)" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			yellow.setContact(yellow.i);
		else if (input == "SEARCH")
			yellow.search() ;
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Wrong Command!" << std::endl;
	}
	return (0);
}