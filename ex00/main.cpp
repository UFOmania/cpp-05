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

    Bureaucrat v("hmad", 2);
    
    try
    {
        v.upgrade(5);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << "\n";
    }

    std::cout <<  "done\n";
}