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
#include "GradeTooHighException.hpp"
#include "FormNotSignedException.hpp"
#include "FormAlreadySignedException.hpp"

AForm::~AForm()
{}

AForm::AForm() : _name("default"), _isSigned(false), _gradeToExec(150), _gradeToSign(150)
{}
 
AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false), _gradeToExec(gradeToExec), _gradeToSign(gradeToSign)
{
    if (gradeToExec <= 0 || gradeToSign <= 0)
		throw GradeTooHighException();
	
	if (gradeToExec > 150 || gradeToSign > 150)
		throw GradeTooLowException();

}

AForm::AForm(AForm const &other) : _name(other._name), _isSigned(other._isSigned), _gradeToExec(other._gradeToExec), _gradeToSign(other._gradeToSign)
{}

AForm &AForm::operator=(AForm const &other)
{
    if (this != &other)
        _isSigned = other._isSigned;

    return *this;
}

std::string const & AForm::getName() const
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


void AForm::beSigned(Bureaucrat const &signer)
{
	if (_isSigned == true)
		throw FormAlreadySignedException();

    if (signer.getGrade() > _gradeToSign)
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
		throw FormNotSignedException();
	
	if (_gradeToExec < executor.getGrade())
		throw GradeTooLowException();

	exec();
}




