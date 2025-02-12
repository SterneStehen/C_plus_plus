/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:34:33 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/13 00:34:36 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
	try{
    Bureaucrat alice("Alice", 1);
    Bureaucrat bob("Bob", 50);

    ShrubberyCreationForm Shrubbery("Home");
    RobotomyRequestForm Robot("Target");
    PresidentialPardonForm Presid("Someone");
	
	std::cout << "==================Shrubbery==============" << std::endl;
    Shrubbery.beSigned(alice);
    alice.executeForm(Shrubbery);

	std::cout << "==================Robot==============" << std::endl;
    Robot.beSigned(alice);
    alice.executeForm(Robot);

	std::cout << "==================Presid==============" << std::endl;
    Presid.beSigned(alice);
    alice.executeForm(Presid);
	} 
	catch (const std::exception& ex) 
	{
        std::cerr<< "exception" << ex.what() << std::endl;
    }

    return 0;
}
    