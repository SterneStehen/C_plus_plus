/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:55:27 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 03:45:55 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : m_name("Noname"), m_isSigned(false), m_signGrade(150), m_execGrade(150) {}

AForm::AForm(const std::string& name, int signGrade, int execGrade)
    : m_name(name), m_isSigned(false), m_signGrade(signGrade), m_execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& src)
    : m_name(src.m_name), m_isSigned(src.m_isSigned), m_signGrade(src.m_signGrade), m_execGrade(src.m_execGrade) {}

AForm& AForm::operator=(const AForm& obj) {
    if (this != &obj) {
        m_isSigned = obj.m_isSigned; 
    }
    return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const {
    return m_name;
}

bool AForm::isSigned() const {
    return m_isSigned;
}

int AForm::getSignGrade() const {
    return m_signGrade;
}

int AForm::getExecGrade() const {
    return m_execGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > m_signGrade)
        throw GradeTooLowException();
    m_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
    out << "Form " << form.getName() << ", signed: " << (form.isSigned() ? "Yes" : "No")
        << ", grade required to sign: " << form.getSignGrade()
        << ", grade required to execute: " << form.getExecGrade();
    return out;
}
