/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:31:30 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 02:40:14 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
public:
	 Weapon(const std::string& newType);
    ~Weapon();
    void setType(const std::string& newType);
    const std::string& getType() const;
	
};


#endif
