/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:13:52 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/11 14:45:05 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Form.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
    try {
        Bureaucrat bob("Bob", 50);
        Bureaucrat alice("Alice", 1);

        Form formA("FormA", 25, 75);
        std::cout << formA << std::endl;

        bob.signForm(formA);

        alice.signForm(formA);

        std::cout << formA << std::endl;
    } catch (const std::exception &ex) 
	{
        std::cerr << "Exception caught: " << ex.what() << std::endl;
    }

    std::cout << "\n--- Testing Exceptions for Form ---\n";

    try 
	{
        Form invalidFormHigh("InvalidFormHigh", 0, 75);
    } 
	catch (const std::exception &ex) 
	{
        std::cerr << "Exception caught for high grade: " << ex.what() << std::endl;
    }

    try 
	{
        Form invalidFormLow("InvalidFormLow", 25, 151);
    } 
	catch (const std::exception &ex) 
	{
        std::cerr << "Exception caught for low grade: " << ex.what() << std::endl;
    }

    return 0;
}
