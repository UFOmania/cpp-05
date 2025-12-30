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
#define FOEM_HPP

#include <ostream>
#include <string>

class Form
{
    private:
        std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExec;

    public:
        ~Form();
        Form();
        Form(std::string _name, int gradeToSign, int gradeToExic);
        Form(Form const &other);
        Form &operator=(Form const &other);
        
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
};

std::ostream &operator<<(std::ostream &os, Form const &form);


#endif