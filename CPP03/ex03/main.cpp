/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:49:37 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 01:06:05 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include <iostream>
 
int main() {
    DiamondTrap dt("Diamond");

    dt.attack("target");
    dt.whoAmI();
    dt.takeDamage(20);
    dt.beRepaired(10);

    return 0;
}
