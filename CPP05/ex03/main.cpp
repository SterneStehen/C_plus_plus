/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:34:33 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 04:31:00 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() 
{
    try 
	{
        Intern intern;
        Bureaucrat Serg("Serg", 1);

		std::cout << "============= shrubbery ========================" << std::endl;

        AForm* shrubbery = intern.makeForm("shrubber", "garden");
        if (shrubbery) {
            shrubbery->beSigned(Serg);
            Serg.executeForm(*shrubbery);
            delete shrubbery;
        }

		std::cout << "============= ROBOT ========================" << std::endl;

        AForm* robotomy = intern.makeForm("robot", "Bender");
        if (robotomy) {
            robotomy->beSigned(Serg);
            Serg.executeForm(*robotomy);
            delete robotomy;
        }

			std::cout << "============= President ========================" << std::endl;

        AForm* pardon = intern.makeForm("president", "Alice");
        if (pardon) {
            pardon->beSigned(Serg);
            Serg.executeForm(*pardon);
            delete pardon;
        }
		std::cout << "============= uKnown ========================" << std::endl;
        intern.makeForm("uKnown form", "test");
    } 
	catch (const std::exception& ex) 
	{
        std::cerr << ex.what() << std::endl;
    }

    return 0;
}
