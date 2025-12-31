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

Form::~Form()
{}

Form::Form() : _name("default"), _isSigned(true), _gradeToExec(1), _gradeToSign(1)
{}
 
Form::Form(std::string name, int gradeToSign, int gradeToExic) : _name(name), _isSigned(false), _gradeToExec(gradeToExic), _gradeToSign(gradeToSign)
{}

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

void Form::beSigned(Bureaucrat const &bur)
{
    if (bur.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
    os << "Form: " << form.getName() << ", signed:" << (form.getIsSigned() ? " yes" : " no") << ", gradeToSign:" << form.getGradeToSign()<< ", gradeToExic:" << form.getGradeToExec();

    return os;
}




