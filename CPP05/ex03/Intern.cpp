/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:15:45 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 06:01:08 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	std::cout << "Intern run" << std::endl;
}

Intern::Intern(const Intern& src){
	(void)src;
	std::cout << "Intern copy" << std::endl;
}

Intern& Intern::operator=(const Intern& obj){
	(void)obj;
	std::cout << "Intern assig" << std::endl;
	return *this;
}


Intern::~Intern(void){};


AForm* createShrubberyForm(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

AForm* createRobotomyForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}

AForm* createPresidentialForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    
	const std::string arr[] = { "shrubber", "robot", "president"};

    AForm* (*formCreators[])(const std::string&) = { &createShrubberyForm, &createRobotomyForm, &createPresidentialForm };

    for (int i = 0; i < 3; ++i)
	{
        if (formName == arr[i]) 
		{
            std::cout << "Intern run " << formName << std::endl;
            return formCreators[i](target);
        }
    }

    std::cerr << "Error: Form \"" << formName << "\" not recognized" << std::endl;
    return nullptr;
}
