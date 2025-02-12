/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:39:13 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 03:54:02 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include "Bureaucrat.hpp" 
#include "AForm.hpp"


Bureaucrat::Bureaucrat(const std::string& name, int grade) : m_name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    m_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)
{
    if (this != &obj)
    {
        if (obj.m_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (obj.m_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        
        this->m_grade = obj.m_grade;
    }
    return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : m_name(src.m_name), m_grade(src.m_grade)
{
    if (m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj)
{
    o << obj.getName() << " bureaucrat grade " << obj.getGrade() << ".";
    return o;
}

const std::string& Bureaucrat::getName() const
{
    return m_name;
}

int Bureaucrat::getGrade() const
{
    return m_grade;
}

void Bureaucrat::HiGrade()
{
    if (m_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    --m_grade;
}

void Bureaucrat::LowGrade()
{
    if (m_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    ++m_grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}


void Bureaucrat::signForm(AForm& F) {
    try {
        F.beSigned(*this);
        std::cout << getName() << " signed " << F.getName() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << getName() << " could not sign " << F.getName() << " because " << e.what() << std::endl;
    }
}


void Bureaucrat::executeForm(const AForm &form) const {
    try {
        form.execute(*this);
        std::cout << getName() << " executed " << form.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << getName() << " can NOT execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}
