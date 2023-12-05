/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:55:31 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/05 17:16:50 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructor
// Contact::Contact(const std::string& fn, const std::string& ln, const std::string& nick, const int& pn, const std::string& ds)
//     : firstname(fn), lastname(ln), nickname(nick), phonenumber(pn), darksecret(ds) {}

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

int	Contact::getPhoneNumber() const {
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

void	Contact::setPhoneNumber(const int&	pn){
		phonenumber = pn; 
}

void Contact::setDarkSecret(const std::string& ds) {
    darksecret = ds;
}

