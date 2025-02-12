/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:55:27 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 04:32:34 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string> 
#include <iostream>

class Bureaucrat;

class AForm 
{
private:
    const std::string m_name;
    bool m_isSigned;
    const int m_signGrade;
    const int m_execGrade;

public:

    AForm();
    AForm(const std::string& name, int signGrade, int execGrade);
    AForm(const AForm& src); 
    AForm& operator=(const AForm& obj);
    virtual ~AForm();

 
    const std::string& getName() const;
    bool isSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;

    void beSigned(const Bureaucrat& bureaucrat);
    virtual void execute(const Bureaucrat& executor) const = 0;

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "Grade too high!";
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "Grade too low!";
        }
    };

    class FormNotSignedException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "Form is not signed!";
        }
    };
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif
