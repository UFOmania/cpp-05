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
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

int main()
{
	{
		try{
			Form f("F", 100, 40);

		}
		catch(std::exception &e){
			std::cerr<< e.what() << "\n";
		}
	}

	{
		try{
			Form f("F", 100, 40);
			
		}
		catch(std::exception &e){
			std::cerr<< e.what() << "\n";
		}
	}
    
}