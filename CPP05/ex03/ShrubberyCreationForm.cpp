/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:34:56 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 15:25:06 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ShrubberyCreationForm.hpp" 
#include <fstream>
 
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), m_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src), m_target(src.m_target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this != &obj) {
        AForm::operator=(obj);
        m_target = obj.m_target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (!isSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getExecGrade())
        throw GradeTooLowException();

    std::ofstream file(m_target + "_shrubbery");
    if (file.is_open()) {
        file << "ASCII Tree\n";
		file << "               v .   ._, |_  .,\n " ;
        file << "      `-._\\/  .  \\ /    |/_\n " ; 
        file <<  "         \\  _\\, y | \\//\n " ;  
        file <<  "   _\\_.___\\, \\/ -.\\||\n " ;  
        file <<   "   `7-,--.`._||  / / ,\n " ; 
        file <<  "     /'     `-. `./ / |/_.'\n " ;  
        file <<  "               |    |//\n " ; 
        file <<  "               |_    /\n " ; 
        file <<  "               |-   |\n " ; 
        file <<  "               |   =|\n " ;  
        file <<  "               |    |\n " ;
		file <<   " ------------/ ,  . \\--------._\n " ; 
        file.close();
    }
}
