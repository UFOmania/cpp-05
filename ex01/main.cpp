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

#include <iostream>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Form a("car", 100, 20);
	Bureaucrat b("B", 10);
	Bureaucrat c("C", 10);

	b.signForm(a);
	c.signForm(a);

	std::cout << "=======================\n";

	{
		try{
			Form f("F", 100, 40);
			std::cout << f << "\n";
		}
		catch(std::exception &e){
			std::cerr<< e.what() << "\n";
		}
	}

	{
		try{
			Form f("F", 100, 0);
			std::cout << f << "\n";
		}
		catch(std::exception &e){
			std::cerr<< e.what() << "\n";
		}
	}
    
}