/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:45 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 00:33:47 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
  private:
	std::string Name;
	int hitPoint;
	int energyPoints;
	int attackDamage;
	
  public:
	ClapTrap(std::string newName);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();

	std::string getName(void) const;
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void annonce(void);
};
#endif