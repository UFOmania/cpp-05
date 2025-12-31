/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:35:19 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 20:16:56 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Form.hpp"

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat()
{
    _name = "default";
    _grade = 150;
}


Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
    if (grade > 150)
        throw GradeTooHighException();
    else if (grade <= 0)
        throw GradeTooLowException();

    _grade = grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat & other)
{
    *this = other;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat & other)
{
    if (this == &other)
        return *this;
        
    _name = other._name;
    _grade = other._grade;
    
    return *this;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
    std::string output = bureaucrat.getName() + ", bureaucrat grade ";
    output += bureaucrat.getGrade();
    os <<  output;
    return os;
}

std::string  Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void    Bureaucrat::upgrade(int by)
{
    if (_grade - by <= 0)
        throw GradeTooHighException();
    _grade -= by;
}

void    Bureaucrat::downgrade(int by)
{
    if (_grade + by > 150)
        throw GradeTooLowException();
    _grade += by;
}

void    Bureaucrat::signForm(Form &form)
{
    try
    {
        if (form.getIsSigned() == false)
        {
            form.beSigned(*this);
            std::cout << _name << " signed " << form.getName() << "\n";
        }
        else
            std::cout << form.getName() << " is already signed" << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn’t sign " << form.getName() << " because " << e.what() << "\n";
    }
    
}