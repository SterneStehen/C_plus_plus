/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:16:30 by smoreron          #+#    #+#             */
/*   Updated: 2024/08/14 04:53:50 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook() : index(0) {}

void PhoneBook::AddContact() {
    if (index == 8) 
	{
        index = 0;
    }
    contacts[index].AddContact();
    index++;
}

void PhoneBook::SearchContacts() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << contacts[i].GetShortStr(contacts[i].GetFirstName()) << "|"
                  << std::setw(10) << contacts[i].GetShortStr(contacts[i].GetSecondName()) << "|"
                  << std::setw(10) << contacts[i].GetShortStr(contacts[i].GetNickName()) << std::endl;
    }

    int idx;
std::cout << "Enter index to view details: ";
std::cin >> idx;


if (std::cin.fail())
{
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Invalid index!" << std::endl;
}
else if (idx >= 1 && idx <= 8)
{
    contacts[idx - 1].DisplayContact();
}
else
{
    std::cout << "Invalid index!" << std::endl;
}

}
