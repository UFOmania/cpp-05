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
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{

    // Form f("stage", 10, 2);
    // std::cout << f << std::endl;
	Intern i;
    AForm *f;
	try
	{
		f= i.makeForm("ShrubberyCwreationForm", "home");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		f = NULL;
	}

	std::cout << f << "\n";
	
	// AForm *g = new RobotomyRequestForm();

    Bureaucrat v("hmad", 150);
    Bureaucrat r("rachid", 2);

    // v.signForm(*f);
	// try
	// {
	// 	v.executeForm(*f);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	if (!f)
		return 1;
	try
	{
		r.signForm(*f);
		r.executeForm(*f);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    // Bureaucrat t("icham", 2);
	delete f;

    // v.signForm(f);
    // r.signForm(f);
    // t.signForm(f);
}