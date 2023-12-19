/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:55:31 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/18 14:52:17 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){};

// Getters
std::string Contact::getFirstName() const {
    return firstname;
}

std::string Contact::getLastName() const {
    return lastname;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string	Contact::getPhoneNumber() const {
	return phonenumber;
}

std::string Contact::getDarkSecret() const {
    return darksecret;
}

// Setters
void Contact::setFirstName(const std::string& fn) {
    firstname = fn;
}

void Contact::setLastName(const std::string& ln) {
    lastname = ln;
}

void Contact::setNickname(const std::string& nick) {
    nickname = nick;
}

void	Contact::setPhoneNumber(const std::string&	pn){
	
    int i = -1;
    while(pn[++i])
    {
        if (std::isdigit(pn[i]) == false)
        {
            std::cout << "Number Wrong" << std::endl;
            phonenumber = "Number Wrong";
            return ;    
        }
    }
    phonenumber = pn; 
}

void Contact::setDarkSecret(const std::string& ds) {
    darksecret = ds;
}

