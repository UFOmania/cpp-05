/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:11:44 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 20:19:28 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <ostream>
#include <exception>
#include <string>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToExec;
        const int _gradeToSign;

    public:
        class GradeTooHighException: public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char *what() const throw();
        };
        class FormNotSignedException: public std::exception
        {
            public:
                const char *what() const throw();
        };
        class FormAlreadySignedException: public std::exception
        {
            public:
                const char *what() const throw();
        };
        virtual ~AForm();
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExic);
        AForm(AForm const &other);
        AForm &operator=(AForm const &other);
        
        std::string const & getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        

        void beSigned(Bureaucrat const &bur);

        void execute(Bureaucrat const & executor) const;

	protected:
		virtual void exec() const = 0;
};

std::ostream &operator<<(std::ostream &os, AForm const &form);


#endif