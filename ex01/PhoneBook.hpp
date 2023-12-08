/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:57:44 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/08 17:25:10 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstring>
#include "Contact.hpp"

class Phonebook
{
	private:
		
		Contact	contact[3];
		
	
	public:
			
		int	i;
		int	size;
		Phonebook(void);
		void	add(void);
		void	search(void);
		void	setContact();
};

#endif