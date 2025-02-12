/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:33:57 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 01:42:41 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N;
	std::cout << "Enter number of zombies: ";
    std::cin >> N;
	std:: string name;
	std::cout << "Enter name:  ";
	std::cin >> name;
	
	Zombie *horde = zombieHorde(N, name);
	
	if (horde)
	{
		for (int i = 0; i < N; i++)
		{
			std::cout << "horde number " << i << "  announce" << std::endl;
			horde[i].announce();
		}
		delete[] horde;
	}
	return 0;
}