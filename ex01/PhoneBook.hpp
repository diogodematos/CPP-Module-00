/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:57:44 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/02 12:46:51 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{
	private:
		
		Contact	contact[8];
		
	public:
			
		int	i;
		int	size;
		Phonebook(void);
		void	add(void);
		void	search(void);
		void	addContact();
		std::string Formatten(std::string input);
};

#endif