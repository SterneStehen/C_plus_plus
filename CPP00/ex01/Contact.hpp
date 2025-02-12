/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:16:23 by smoreron          #+#    #+#             */
/*   Updated: 2024/08/14 15:09:38 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

class Contact
{
private:
	std::string m_firstName;
	std::string m_secondName;
	std::string m_nickName;
	std::string m_PhoneNumber;
	std::string m_Secret;
public:
	void AddContact();
	void DisplayContact() const;
	std::string GetShortStr(std::string str) const;
	std::string GetFirstName() const { return m_firstName; }
    std::string GetSecondName() const { return m_secondName; }
    std::string GetNickName() const { return m_nickName; }
};
#endif