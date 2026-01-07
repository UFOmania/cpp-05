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
#include <iostream>

Form::~Form()
{}

Form::Form() : _name("default"), _isSigned(false), _gradeToExec(150), _gradeToSign(150)
{}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false) , _gradeToExec(gradeToExec), _gradeToSign(gradeToSign)
{
	if (gradeToExec <= 0 || gradeToSign <= 0)
		throw Form::GradeTooHighException();
	
	if (gradeToExec > 150 || gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other) : _name(other._name), _isSigned(other._isSigned) , _gradeToExec(other._gradeToExec), _gradeToSign(other._gradeToSign)
{}

Form    &Form::operator=(Form const &other)
{
    if (this != &other)
        _isSigned = other._isSigned;
    return *this;
}

std::string const &Form::getName() const
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
    {
		std::cout << "Form " << _name << " is already signed.\n";
        return;
    }
    if (signer.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
		
    _isSigned = true;
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
    os << "Form: " << form.getName() << ", signed:" << (form.getIsSigned() ? " yes" : " no") << ", gradeToSign:" << form.getGradeToSign()<< ", gradeToExec:" << form.getGradeToExec();

    return os;
}




const char * Form::GradeTooHighException::what() const throw() {
    return "Form Exception: Grade Too High";
}
const char * Form::GradeTooLowException::what() const throw() {
    return "Form Exception: Grade Too Low";
}



