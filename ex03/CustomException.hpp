/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:29:50 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 19:59:26 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUSTOMEXCEPTION_HPP
#define CUSTOMEXCEPTION_HPP

#include <exception>

class CustomException : public std::exception
{
	private:
		const char *_msg;

    public:
        ~CustomException() throw();
        CustomException();
        CustomException(char const *msg);
        
        const char * what() const throw ();
};

#endif