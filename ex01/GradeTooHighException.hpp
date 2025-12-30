/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:29:50 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 19:58:54 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP

#include <exception>
#include <string>

class GradeTooHighException : public std::exception
{
   
    public:
        ~GradeTooHighException()   throw ();
        GradeTooHighException();
        
        const char * what() const throw ();
};

#endif