/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:29:50 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 19:58:59 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

GradeTooHighException::~GradeTooHighException()  throw ()
{}

GradeTooHighException::GradeTooHighException()
{}

const char * GradeTooHighException::what() const throw ()
{
    return "grade too High";
}