/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:38:59 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/11 14:40:20 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "AForm.hpp"


class AForm;

class Bureaucrat
{
private:
	const std::string m_name;
	int m_grade;
public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & obj);
	~Bureaucrat();

	class GradeTooHighException : public std::exception{
		public:
			const char *what() const throw();
	};

	class GradeTooLowException : public std::exception{
		public:
			const char *what() const throw();
	};

	const std::string& getName() const;
	int getGrade() const;

	void HiGrade();
	void LowGrade();

	void signForm(AForm& F);
	void executeForm(const AForm &form) const;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

#endif