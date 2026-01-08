/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:11:44 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 20:19:28 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <ostream>
#include <string>
#include <exception>
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToExec;
        const int _gradeToSign;

    public:
        class GradeTooHighException : public std::exception
        {  
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class FormAlreadySigned : public std::exception
        {
            public:
                const char *what() const throw();
        };

        ~Form();
        Form();
        Form(std::string name, int gradeToSign, int gradeToExec);
        Form(Form const &other);
        Form &operator=(Form const &other);
        
        std::string const &	 getName() const;

        bool		getIsSigned() const;
        int			getGradeToSign() const;
        int			getGradeToExec() const;

        void		beSigned(Bureaucrat const &signer);
};

std::ostream &operator<<(std::ostream &os, Form const &form);


#endif