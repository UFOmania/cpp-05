/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:19:40 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 20:20:10 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"
#include "FormAlreadySignedException.hpp"

Form::~Form()
{}

Form::Form() : _name("default"), _isSigned(false), _gradeToExec(150), _gradeToSign(150)
{}
 
Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false)
{
	if (gradeToExec <= 0 || gradeToSign <= 0)
		throw GradeTooHighException();
	
	if (gradeToExec > 150 || gradeToSign > 150)
		throw GradeTooLowException();

	_gradeToExec = gradeToExec;
	_gradeToSign = gradeToSign;
}

Form::Form(Form const &other) 
: _name(other._name)
{
    *this = other;
}

Form &Form::operator=(Form const &other)
{
    if (this == &other)
        return *this;

    _gradeToExec = other._gradeToExec;
    _gradeToSign = other._gradeToSign;
    _isSigned = other._isSigned;
    return *this;
}

std::string Form::getName() const
{
    return _name;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

int Form::getGradeToExec() const
{
    return _gradeToExec;
}
int Form::getGradeToSign() const
{
    return _gradeToSign;
}

void Form::beSigned(Bureaucrat const &signer)
{
	if (_isSigned == true)
		throw FormAlreadySignedException();

    if (signer.getGrade() > _gradeToSign)
        throw GradeTooLowException();
		
    _isSigned = true;
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
    os << "Form: " << form.getName() << ", signed:" << (form.getIsSigned() ? " yes" : " no") << ", gradeToSign:" << form.getGradeToSign()<< ", gradeToExic:" << form.getGradeToExec();

    return os;
}




