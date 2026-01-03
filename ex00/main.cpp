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
#include <exception>

#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

int main()
{
	std::cout << "----------------------------------\n";
	{
		try{
			Bureaucrat a("A", 0);
		}
		catch(std::exception &e)
		{
			std::cerr<< e.what()<< "\n";
		}
	}
	std::cout << "----------------------------------\n";
	{
		try{
			Bureaucrat a("B", 151);
		}
		catch(std::exception &e)
		{
			std::cerr<< e.what()<< "\n";
		}
	}
	std::cout << "----------------------------------\n";
	
	{
		try{
			Bureaucrat a("C", 50);
			std::cout << "1) " << a << "\n";
			a.downgrade(10);
			std::cout << "2) " << a << "\n";
			a.downgrade(200);
			std::cout << "3) " << a << "\n";
		}
		catch(std::exception &e)
		{
			std::cerr<< e.what()<< "\n";
		}
	}
	std::cout << "----------------------------------\n";
	
	{
		try{
			Bureaucrat a("D", 50);
			std::cout << "1) " << a << "\n";
			a.upgrade(10);
			std::cout << "2) " << a << "\n";
			a.upgrade(200);
			std::cout << "3) " << a << "\n";
		}
		catch(std::exception &e)
		{
			std::cerr<< e.what()<< "\n";
		}
	}
	
	std::cout << "----------------------------------\n";
    {
		
		
		try
		{
			Bureaucrat a("E", 2);

		}
		catch (std::exception &e)
		{
			std::cerr<< e.what() << "\n";
	    }
	}

    std::cout <<  "done\n";
}