/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:35:19 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 20:17:07 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

Bureaucrat::~Bureaucrat()
{}


Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{}


Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade <= 0)
        throw GradeTooHighException();
    _grade = grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat & other): _name(other._name), _grade(other._grade)
{}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat & other)
{
    if (this != &other)
        _grade = other._grade;

    return *this;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
    os <<  bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

std::string  const & Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void    Bureaucrat::incrementGrade(int by)
{
    if (_grade - by <= 0)
        throw GradeTooHighException();
    _grade -= by;
}

void    Bureaucrat::decrementGrade(int by)
{
    if (_grade + by > 150)
        throw GradeTooLowException();
    _grade += by;
}

void    Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn’t sign " << form.getName() << " because " << e.what() << "\n";
    }
    
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << "\n";
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn’t execute " << form.getName() << " because " << e.what() << "\n";
    }
}