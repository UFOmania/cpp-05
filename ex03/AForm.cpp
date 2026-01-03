/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:19:40 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 20:20:10 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"
#include "CustomException.hpp"

AForm::~AForm()
{}

AForm::AForm() : _name("default"), _isSigned(true), _gradeToExec(1), _gradeToSign(1)
{}
 
AForm::AForm(std::string name, int gradeToSign, int gradeToExic) : _name(name), _isSigned(false), _gradeToExec(gradeToExic), _gradeToSign(gradeToSign)
{}

AForm::AForm(AForm const &other) 
: _name(other._name)
{
    *this = other;
}

AForm &AForm::operator=(AForm const &other)
{
    if (this == &other)
        return *this;

    _gradeToExec = other._gradeToExec;
    _gradeToSign = other._gradeToSign;
    _isSigned = other._isSigned;
    return *this;
}

std::string AForm::getName() const
{
    return _name;
}

bool AForm::getIsSigned() const
{
    return _isSigned;
}

int AForm::getGradeToExec() const
{
    return _gradeToExec;
}
int AForm::getGradeToSign() const
{
    return _gradeToSign;
}


void AForm::beSigned(Bureaucrat const &bur)
{
	if (_isSigned == true)
		throw CustomException("Form is already Signed!");

    if (bur.getGrade() > _gradeToSign)
        throw GradeTooLowException();
		
    _isSigned = true;
}

std::ostream &operator<<(std::ostream &os, AForm const &form)
{
	os << "Form: " << form.getName() << ", signed:" << (form.getIsSigned() ? " yes" : " no") << ", gradeToSign:" << form.getGradeToSign()<< ", gradeToExic:" << form.getGradeToExec();

	return os;
}


void AForm::execute(Bureaucrat const & executor) const
{
	if (_isSigned == false)
		throw CustomException("Form is not Signed!");
	
	if (_gradeToExec < executor.getGrade())
		throw GradeTooLowException();

	exec();
}




