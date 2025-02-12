/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:46:10 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 05:21:32 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Intern 
{
private:
public:
    Intern();
    Intern(const Intern& src);
    Intern& operator=(const Intern& obj);
    ~Intern();

    AForm* makeForm(const std::string& formName, const std::string& target) const;
};

#endif
