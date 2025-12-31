/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:15:03 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 20:16:48 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        ~Bureaucrat();
        Bureaucrat();
        Bureaucrat(const std::string & name, int grade);
        Bureaucrat(const Bureaucrat & other);
        Bureaucrat &operator=(const Bureaucrat & other);
 
        std::string getName() const;
        int getGrade() const;

        void upgrade(int by);
        void downgrade(int by);

        void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif