/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:33:29 by smoreron          #+#    #+#             */
/*   Updated: 2024/08/14 03:43:50 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"


void Contact::AddContact()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter first name: ";
    std::getline(std::cin, m_firstName);

    std::cout << "Enter last name: ";
    std::getline(std::cin, m_secondName);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, m_nickName);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, m_PhoneNumber);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, m_Secret);
}



std::string Contact::GetShortStr(std::string str) const
{
    if (static_cast<int>(str.size()) > 10)
        return (str.substr(0, 9) + ".");
    else
        return (std::string(10 - static_cast<int>(str.size()), ' ') + str);
}

void Contact::DisplayContact() const
{

    std::cout << "First Name: " << m_firstName << std::endl;
    std::cout << "Last Name: " << m_secondName << std::endl;
    std::cout << "Nickname: " << m_nickName << std::endl;
    std::cout << "Phone Number: " << m_PhoneNumber << std::endl;
    std::cout << "Darkest Secret: " << m_Secret << std::endl;
}
