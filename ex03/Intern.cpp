#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "CustomException.hpp"
#include "AForm.hpp"
#include <iostream>


Intern::~Intern(){}
Intern::Intern(){}
Intern::Intern(const Intern &other){(void)other;}
Intern &Intern::operator=(const Intern &other){
	(void)other;
	return *this;
}


AForm *Intern::makeForm(const std::string & formName, const std::string & formTarget)
{

	const std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == formName)
		{
			switch (i)
			{
				case 0:
					std::cout << "Intern has made Form " << forms[i] << "\n";
					return new ShrubberyCreationForm(formTarget);
				case 1:
					std::cout << "Intern has made Form " << forms[i] << "\n";
					return new RobotomyRequestForm(formTarget);
				case 2:
					std::cout << "Intern has made Form " << forms[i] << "\n";
					return new PresidentialPardonForm(formTarget);
			}
		}
	}
	throw CustomException("Form is Unknown!");
}