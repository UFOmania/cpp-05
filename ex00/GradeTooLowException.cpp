/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:53:03 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 19:59:07 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::~GradeTooLowException() throw ()
{}

GradeTooLowException::GradeTooLowException()
{}

const char * GradeTooLowException::what() const throw ()
{
    return "grade too Low";
}