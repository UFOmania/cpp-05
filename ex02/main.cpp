/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:55:41 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/30 20:10:42 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
// #include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

    // Form f("stage", 10, 2);
    // std::cout << f << std::endl;
    AForm *f = new ShrubberyCreationForm();
    Bureaucrat v("hmad", 20);

    v.signForm(*f);
    v.executeForm(*f);
    // Bureaucrat r("rachid", 2);
    // Bureaucrat t("icham", 2);

    // v.signForm(f);
    // r.signForm(f);
    // t.signForm(f);
}