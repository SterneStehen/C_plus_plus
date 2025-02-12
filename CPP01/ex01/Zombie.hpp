/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:46:59 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 01:36:22 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>


class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce( void );
	void setName(std::string NewName);
};

Zombie* zombieHorde( int N, std::string name );

// void randomChump( std::string name );
// Zombie* newZombie( std::string name );



#endif