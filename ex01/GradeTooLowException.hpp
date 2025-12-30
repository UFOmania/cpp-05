/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:29:50 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 19:59:26 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP

#include <exception>
#include <string>

class GradeTooLowException : public std::exception
{
   
    public:
        ~GradeTooLowException() throw();
        GradeTooLowException();
        
        const char * what() const throw ();
};

#endif