/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 02:11:34 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 03:34:31 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
  private:
	std::string humanAName;
	Weapon &eqwipmentHumanA;

  public:
	HumanA(const std::string &name, Weapon &Weapon);
	~HumanA();
	void attack() const;
};

#endif