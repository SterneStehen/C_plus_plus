/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:29:47 by smoreron          #+#    #+#             */
/*   Updated: 2024/08/14 15:05:20 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	
	if(argc == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	}
	else
	{
		for(int i = 1 ; i < argc; i++)
		{
			for(int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
		if(i != argc-1)
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}