/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:33:40 by smoreron          #+#    #+#             */
/*   Updated: 2024/08/14 04:15:49 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main()
{
	PhoneBook phoneBook;
    std::string command;
	std::string	cmd;
	
	while (true)
	{
		std::cout << "Enter command: 1.ADD or 2.SEARCH or 3.EXIT \n" << std::endl;
		std::cin >> cmd;
		if(cmd == "ADD" || cmd == "add" || cmd == "1")
		{
			phoneBook.AddContact();
		}
		else if(cmd == "SEARCH" || cmd == "search" || cmd == "2")
		{
			phoneBook.SearchContacts();
		}
		else if (cmd == "EXIT" || cmd == "3")
		{
			break;
		}
		else
			std::cout << "repid you command \n" << std::endl;
	}
	return 0;
}