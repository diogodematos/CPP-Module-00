/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:34:33 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/06 12:56:09 by dcarrilh         ###   ########.fr       */
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
	this->i += 1;
}

void	Phonebook::search(void)
{
	int i = -1;
	if (this->i == 0)
		std::cout << "PhoneBook is empty" << std::endl;
	else
	{
		std::cout << "List of Contacts" << std::endl;
		while (++i < this->i)
		{
			std::cout << "Contact: " <<  i;
			std::cout << "  |  First Name: " << contact[i].getFirstName();
			std::cout << "  |  Last Name: " << contact[i].getLastName();
			std::cout << "  |  Nickname: " << contact[i].getNickname() << std::endl;
		}
		std::cout << "Choose the contact: ";
		std::cin >> i;
		if (((i+1) < 1)  || ((i +1) > this->i))
		{
			std::cout << "Wrong Contact" << std::endl;
			Phonebook::search();		
		}
		else
		{
			std::cout << "First Name: " << contact[i].getFirstName() << std::endl;
			std::cout << "Last Name: " << contact[i].getLastName() << std::endl;
			std::cout << "Nickname: " << contact[i].getNickname() << std::endl;
			std::cout << "Phone Number: " << contact[i].getPhoneNumber() << std::endl;
			std::cout << "DarkSecret: " << contact[i].getDarkSecret() << std::endl;
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