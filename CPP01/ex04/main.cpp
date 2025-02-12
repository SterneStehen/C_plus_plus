/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:27:31 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 03:16:13 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


std::string getReplase(std::string line, std::string s1, std::string s2)
{
	size_t start = 0;
	size_t finish;
	std::string newLine;

	while ((finish = line.find(s1, start)) != std::string::npos)
	{
		newLine += line.substr(start, finish - start);
		newLine += s2;
		start = finish + s1.length();
	}
	newLine += line.substr(start);

	return newLine;
}

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "error argument. Use ./programm filename s1 s2" << std::endl;
		return 1;
	}

	std::string line;
	std::string newLine;	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if(s1.empty() || s2.empty())
	{
		std::cerr << "error argument s1 s2 can not be empty" << std::endl;
		return 1;
	}
	std::ifstream inFile(filename);
	if(!inFile.is_open())
	{
		std::cerr << "Error file" << std::endl;
		return 1;
	}
	std::ifstream inFileTemp(filename);
	std::getline(inFileTemp, line);
	if (line.empty())
		return (std::cout << "empty file\n", inFile.close(), inFileTemp.close() ,1);
	
	std::ofstream outFile(filename + ".replace");
	if(!outFile.is_open())
	{
		std::cerr << "Error file" << std::endl;
		return 1;
	}
	
	while (std::getline(inFile, line))
	{
		
			
		newLine = getReplase(line, s1, s2);
	
		outFile << newLine << std::endl;
	}
	
	inFile.close();
	outFile.close();
	return 0;
}