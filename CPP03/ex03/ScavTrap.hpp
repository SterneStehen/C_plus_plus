
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(std::string newName);
	~ScavTrap();
	
	void attack(const std::string &target);
	void guardGate();
};

#endif