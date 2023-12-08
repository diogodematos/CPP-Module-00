/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:34:33 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/08 18:10:17 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void){}

void	Phonebook::setContact(){
	std::string	input;
	
	if (i == 3)
		i = 0;
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
	std::cin >> input;
	contact[i].setPhoneNumber(input);
	std::cout << "Dark Secret: ";
	std::cin >> input;
	contact[i].setDarkSecret(input);
	if (contact[i].getPhoneNumber() != "Number Wrong")
	{	
		i += 1;
		if (size < 3)
			size++;
	}
}

void	Phonebook::search(void)
{
	int j = -1;
	if (size == 0)
		std::cout << "PhoneBook is empty" << std::endl;
	else
	{
		std::cout << "List of Contacts" << std::endl;
		while (++j < size)
		{
			std::cout << "Contact: " <<  j+1;
			std::cout << "  |  First Name: " << contact[j].getFirstName();
			std::cout << "  |  Last Name: " << contact[j].getLastName();
			std::cout << "  |  Nickname: " << contact[j].getNickname() << std::endl;
		}
		std::cout << "Choose the contact: ";
		std::cin >> j;
		if (((j) < 1)  || ((j) > size))
		{
			std::cout << "Wrong Contact" << std::endl;
			Phonebook::search();		
		}
		else
		{
			std::cout << "First Name: " << contact[j-1].getFirstName() << std::endl;
			std::cout << "Last Name: " << contact[j-1].getLastName() << std::endl;
			std::cout << "Nickname: " << contact[j-1].getNickname() << std::endl;
			std::cout << "Phone Number: " << contact[j-1].getPhoneNumber() << std::endl;
			std::cout << "DarkSecret: " << contact[j-1].getDarkSecret() << std::endl;
		}
	}
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
	yellow.size = 0;
	std::cout << "Welcome to PhoneBook! " << std::endl;
	while (1)
	{
		std::cout << "What you want to do? (ADD) | (SEARCH) | (EXIT)" << std::endl;
		std::cin >> input;
		if (input == "ADD" || input == "add")
			yellow.setContact();
		else if (input == "SEARCH" || input == "search")
			yellow.search() ;
		else if (input == "EXIT" || input == "exit")
			return (0);
		else
			std::cout << "Wrong Command!" << std::endl;
	}
	return (0);
}