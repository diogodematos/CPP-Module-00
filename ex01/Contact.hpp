/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:36:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/02 12:19:35 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>
#include <iomanip>

class	Contact{
	
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string	phonenumber;
		std::string darksecret;

	public:
		//Contact(const std::string& fn, const std::string& ln, const std::string& nick, const int& pn, const std::string& sd);
		Contact(void);
    // Getters
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
		std::string	getPhoneNumber() const;
    std::string getDarkSecret() const;

    // Setters
    void	setFirstName(const std::string& fn);
    void	setLastName(const std::string& ln);
    void	setNickname(const std::string& nick);
		void	setPhoneNumber(const std::string&	pn);
    void	setDarkSecret(const std::string& ds);
};

#endif