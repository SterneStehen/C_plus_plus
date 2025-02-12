/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:43:11 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 15:24:17 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream> 

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), m_target(target) {
    std::srand(std::time(nullptr));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
    : AForm(src), m_target(src.m_target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
    if (this != &obj) {
        AForm::operator=(obj);
        m_target = obj.m_target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (!isSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getExecGrade())
        throw GradeTooLowException();

    std::cout << "Drilling noises... wait\n";
    if (std::rand() % 2)
        std::cout << m_target << "OMG!! has been robotomized successfully!\n";
    else
        std::cout << "Robotomy of " << m_target << " FAIL.\n";
}
