/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 00:23:03 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 03:28:51 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Testing DEBUG level:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nTesting INFO level:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nTesting WARNING level:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nTesting ERROR level:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nTesting invalid level:" << std::endl;
    harl.complain("INVALID");

    return 0;
}